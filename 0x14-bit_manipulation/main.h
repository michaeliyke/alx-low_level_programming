#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

typedef struct bity
{
	char ch;
	int index;
	struct bity *next;
} bity_t;

bity_t *add_node(bity_t *head, int index, char ch);
int _strlen(char *string);
int *get_bits(char *chars);
unsigned int binary_to_uint(const char *b);
#endif
