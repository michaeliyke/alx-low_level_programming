#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = wildcmp("main.c", "*.c"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main.c", "m*a*i*n*.*c*"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main.c", "main.c"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main.c", "m*c"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main.c", "ma********************************c"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main.c", "*"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main.c", "***"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main.c", "m.*c"); /* 0 */
	printf("%d\n", r);
	r = wildcmp("main.c", "**.*c"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main-main.c", "ma*in.c"); /* 1 */
	printf("%d\n", r);
	r = wildcmp("main", "main*d"); /* 0 */
	printf("%d\n", r);
	r = wildcmp("abc", "*b"); /* 0 */
	printf("%d\n", r);
	return (0);
}
