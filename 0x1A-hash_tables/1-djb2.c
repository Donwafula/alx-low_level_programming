#include "hash_tables.h"

/**
 * hash_djb2 - The hash func implementing the djb2 algorithm.
 * @str: string to hash.
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
