#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
void getfmt(char *c);
void intprint(int *x);
void charprint(char *c);
void floatprint(float *x);
void strprint(int *x);

/**
 * struct specs - for specification mgt
 *
 * This is to manage the format specifiers
 */
struct specs
{
	char *fmt;
	void (*printer)(char *fmt);
};

struct specs fmts[] =
    {
	{.fmt = 'c', .printer = NULL},
	{.fmt = 'i', .printer = NULL},
	{.fmt = 'f', .printer = NULL},
	{.fmt = 's', .printer = NULL},
	{.fmt = NULL, .printer = NULL},
}
#endif
