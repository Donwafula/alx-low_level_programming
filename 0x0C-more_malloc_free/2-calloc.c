#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: length to allocate in the memory
 * @size: size of casting to save
 * Return: Pointer to the allocated memory,  0 or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (nmemb * size);
	c = malloc(j);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		c[i] = 0;
	}
	return (c);
}
