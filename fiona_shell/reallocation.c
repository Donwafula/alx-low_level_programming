#include "shell.h"

/**
 **_memset - Fills a memory area with a constant byte.
 *
 * This function takes a pointer to a memory area (s) and fills it with the
 * specified byte (b) for a given number of bytes (n).
 *
 * @s: The pointer to the memory area.
 * @b: The byte to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree -  Frees a dynamically allocated array of strings.
 *
 * This function takes a pointer to an array of strings (pp) and frees both the
 * strings within the array and the array itself.
 *
 * @pp: Pointer to the array of strings to be freed.
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - Reallocates a block of memory with a new size.
 * @ptr: Pointer to the old memory block.
 * @old_size: Byte size of the old memory block.
 * @new_size: Byte size of the new memory block.
 * Return: Pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
