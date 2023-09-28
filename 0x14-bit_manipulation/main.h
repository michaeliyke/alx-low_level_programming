#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _strlen(char *string);
unsigned int binary_to_uint(const char *b);
char *_strcpy(char *dest, char *src);
void _strrev(char *a);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int count_bits(unsigned long int x);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
