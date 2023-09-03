#ifndef MAIN_H
#define MAIN_H 1
#include <string.h>
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int argc, char **argv);
char **strtow(char *str);
int count(char *str);
int isspace_(char ch);
#define MAX_SPACES 7
int word_count(char *s);

#endif
