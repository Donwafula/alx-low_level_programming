#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - change the memory space of an array.
 * @ptr: pointer to old array.
 * @old_size: the size of ptr
 * @new_size: new size of array
 * Return: pointer to the new array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *realloc, *ptrC;

	ptrC = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	realloc = malloc(new_size);
	if (realloc == NULL)
		return (NULL);

	for (a = 0; a < old_size; a++)
		*(realloc + a) = *(ptrC + a);

	free(ptr);
	return (realloc);
}
