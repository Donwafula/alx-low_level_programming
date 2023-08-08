#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input string
 * Return: pointer to the duplicated str  or NULL
 */

char *_strdup(char *str)
{
	char *c;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;
	c = (char *)  malloc((a + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (b = 0; b < a ; b++)
		c[b] = str[b];

	c[a + 1] = '\0';
	return (c);
}
