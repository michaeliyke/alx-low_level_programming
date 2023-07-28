#include "lists.h"

__attribute__((constructor)) void init(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\n";
	printf("%sI bore my house upon my back!\n", s);
}
