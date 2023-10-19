#include "shell.h"

/**
 * _strncpy - Copy a string up to a specified length.
 * @dest: The destination string to be copied to.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy.
 * Return: A pointer to the destination string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat -  Concatenate two strings up to a specified length.
 * @dest: The first string.
 * @src: The second string to concatenate.
 * @n: The maximum number of bytes to use from 'src'.
 * Return: A pointer to the concatenated string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - Locate a character in a string.
 * @s: The string to be searched.
 * @c: The character to look for.
 * Return: A pointer to the memory.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
