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
	unsigned int a;
	char *s;

	s = malloc(size * sizeof(char));
	if (s == 0 || s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
