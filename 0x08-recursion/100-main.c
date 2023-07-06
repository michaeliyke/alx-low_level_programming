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

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}

/*
We panic in a pew
Won’t lovers revolt now
Ma is a nun, as I am
Eva, can I see bees in a cave
He lived as a devil, eh
Ned, I am a maiden
Now, sir, a war is won
Evade me, Dave!"2"We panic in a pew
Won’t lovers revolt now
Ma is a nun, as I am
Eva, can I see bees in a cave
He lived as a devil, eh
Ned, I am a maiden
Now, sir, a war is won
Evade me, Dave
 */
