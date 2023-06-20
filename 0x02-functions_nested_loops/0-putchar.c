#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * main - prints stuff
 *
 * Return: 0 for success and other number for failure
 */
int main(void)
{
	char str[] = "_putchar\n";

	write(1, str, strlen(str));
	return (0);
}
