#define CAPACIT 50000 /* size of the Hash table */

/***
 * hash - for hashing the elements of the hash table
 * @str: the key to hash
 *
 * Return: long integer
 */
unsigned long hash(char *str)
{
	int j;
	unsigned long i;

	i = 0;
	for (j = 0; str[j]; j++)
		i += str[j];
	return (i % CAPACIT);
}
