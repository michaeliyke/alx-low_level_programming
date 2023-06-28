#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void reverse(char *src);
char *strcopy(char *string);
int strlength(char *string);
void strreverse_2(char *string);
void strreverse_3(char *s);
void strinvert(char *s);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/* char s[10] = "My School"; */

	/* printf("%s\n", s); */
	/* rev_string(s); */
	/* reverse(s); */
	/* printf("%s\n", s); */

	/* int a[10];
	int i = 10; */

	/* Change value of first position */
	/* *a = 31;
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;
	*(a + 5) = 598;
	*(a + 6) = 698;
	*(a + 7) = 798;
	*(a + 8) = 898;
	*(a + 9) = 998;

	while (i-- > 0)
	{
		printf("Address: %p, Value: %d\n", (a + i), *(a + i));
	} */

	char x[] = "School of my choice";
	char *s = x;
	char y[7];

	strinvert(s);
	printf("\nREVERSED is: %s\n", x);

	return (0);
}

void strinvert(char *a)
{
	char *b = a;
	char temp;

	while (*a != '\0')
		a++;
	a--;

	while (a > b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		a--;
		b++;
	}
}

void strreverse_2(char *str)
{
	char *t1 = str;
	char *t2 = str;

	while (*t1 != '\0')
	{
		t1++;
	}

	t1--;

	while (t1 > t2)
	{
		char t3 = *t1;
		*t1 = *t2;
		*t2 = t3;
		t2++;
		t1--;
	}
}

void strreverse_3(char *s)
{
	char *i = s;
	char *j = s;

	while (*j != '\0')
	{
		j++;
	}
	j--;
	while (i < j)
	{
		char k = *i;
		*i = *j;
		*j = k;
		i++;
		j--;
	}
}

/**
 * strleng - Returns the length of a string
 * *string++ moves the address pointed to by string adress from
 * first element to the next and next till the end of the string
 * @string: the address of the input string
 *
 * Return: int length of the string
 */
int strlength(char *str)
{
	int len = 0;
	while (*str++ != '\0')
	{
		len++;
	}
	return (len);
}

char *strcopy(char *str)
{
	char *y = "School";

	while (*y++ != '\0')
	{
		*str++ = *y;
	}
	*str++ = '\0';
	return (str);
}
