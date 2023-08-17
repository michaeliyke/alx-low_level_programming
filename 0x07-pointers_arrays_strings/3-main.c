#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 * @argc: args count
 * @args: all args
 *
 * Return: Always 0.
 */
int main(int argc, char *args[])
{
	char *s = "helloJOKESworld";
	char *f = "mwolrd";

	f = args[1];
	printf("%s:\t%s\n", s, f);
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
