#ifndef MAIN_H
#define MAIN_H 1
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

int _putchar(char c);
int is_num(char *s);
int min_of_coins(int total_amount, int values[], int count);
int min_coins_grdy(int amount, int coins[], int num_of_coins);

#endif
