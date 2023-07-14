#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef unsigned char byte;

void *calloc(size_t num, size_t size)
{
	void *p;
	p = malloc(num * size);
	if (p == 0)
		return (p);
	bzero(p, num * size);
	return (p);
}

void *calloc(size_t num, size_t size)
{
	void *p;
	p = aligned_alloc(size, num * size);
	if (p == 0)
		return (p);
	memset(p, 0, num * size);
	return (p);
}

void bzero(void *s, size_t n)
{
	char *p = (char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

void bzero(void *s, size_t n)
{
	memset(s, 0, n);
}

void *aligned_alloc(size_t alignment, size_t size)
{
	void *p;
	void *q;
	size_t offset;
	if (alignment % sizeof(void *) != 0 || (alignment & (alignment - 1)) != 0 || size % alignment != 0)
	{
		return NULL; // invalid arguments
	}
	p = malloc(size + alignment - 1 + sizeof(void *));
	if (p == NULL)
	{
		return NULL; // allocation failed
	}
	offset = alignment - ((size_t)p % alignment);
	q = (void *)((char *)p + offset);
	*((void **)((char *)q - sizeof(void *))) = p; // store the original pointer for later free
	return q;
}

void *aligned_alloc(size_t alignment, size_t size)
{
	void *p;
	int err;
	err = posix_memalign(&p, alignment, size);
	if (err != 0)
	{
		return NULL; // allocation failed
	}
	return p;
}

void *wordwise_memset(void *s, int c, size_t sz)
{
	byte *p = (byte *)s; // cast the pointer to a byte pointer
	byte x = c & 0xff;   // mask out the higher bits of c
	size_t i;

	// handle any leading bytes until p is aligned to a word boundary
	for (i = 0; i < sz && ((uintptr_t)p % sizeof(size_t)) != 0; i++)
		*p++ = x;

	// compute how many words we need to set
	size_t nwords = (sz - i) / sizeof(size_t);

	// construct a word's worth of x by repeating it as many times as needed
	size_t wx = x;
	for (i = 8; i < sizeof(size_t) * 8; i *= 2)
		wx = (wx << i) | wx;

	// cast p to a word pointer and set nwords words to wx
	size_t *wp = (size_t *)p;
	for (i = 0; i < nwords; i++)
		*wp++ = wx;

	// cast wp back to a byte pointer and handle any trailing bytes
	p = (byte *)wp;
	for (i = nwords * sizeof(size_t); i < sz; i++)
		*p++ = x;

	return s; // return the original pointer
}

void *wordwise_32_memset(void *s, int c, size_t sz)
{
	uint32_t *p = (uint32_t *)s; // cast the pointer to a word pointer
	uint32_t x = c & 0xff;	     // mask out the higher bits of c
	x |= x << 8;		     // shift x left by 8 bits and bitwise-or with itself
	x |= x << 16;		     // shift x left by 16 bits and bitwise-or with itself
	assert(!(sz & 3));	     // check that sz is divisible by 4
	sz >>= 2;		     // divide sz by 4 to get the number of words
	while (sz--)		     // loop until sz reaches zero
		*p++ = x;	     // assign x to the current word and increment the pointer
	return s;		     // return the original pointer
}

void *bytewise_memset(void *s, int c, size_t sz)
{
	byte *p = (byte *)s; // cast the pointer to a byte pointer
	byte x = c & 0xff;   // mask out the higher bits of c
	while (sz--)	     // loop until sz reaches zero
		*p++ = x;    // assign x to the current byte and increment the pointer
	return s;	     // return the original pointer
}
