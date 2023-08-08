#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: integer
 * @c: character
 * Return: Null if 0, char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = (char *) malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
