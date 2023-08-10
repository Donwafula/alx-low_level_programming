#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - Concat string, src appended
 * @dest: Destination string
 * @src: Source string
 * Return: Concat newString to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

/**
 * _strlen - Return the number of the length of the string
 * @s: string to check
 * Return: length of the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}

/**
 * argstostr - Concats argv to new string
 * @ac: Argument count
 * @av: Arguments
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int index, sumStr;
	char *newStr;

	sumStr = 1;

	if (ac == 0 || av == NULL)
		return (0);
	for (index = 0; index < ac && av[index]; index++)
	{
		sumStr += _strlen(av[index]);
	}
	newStr = malloc((sumStr * sizeof(char)) + ac);
	for (index = 0; index < ac && av[index]; index++)
	{
		newStr = _strcat(newStr, av[index]);
		newStr = _strcat(newStr, "\n");
	}
	if (newStr == NULL)
		return (NULL);
	return (newStr);
}
