#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "(A tortoise, having pretty good sense of a hare's ";

	printf("%snature, challenges one to a race.)\n", s);
	return (0);
}

__attribute__((constructor)) void init(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\n";
	printf("%sI bore my house upon my back!\n", s);
}
