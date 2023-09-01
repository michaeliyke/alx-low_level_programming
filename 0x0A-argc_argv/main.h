#ifndef MAIN_H
#define MAIN_H 1
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int _putchar(char c);
int is_num(char *s);
int min_of_coins(int total_amount, int values[], int count);
#define min(a, b) ((a) < (b) ? (a) : (b))

#endif
