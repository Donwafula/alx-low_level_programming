#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be located
 * Return: pointer to the first occurence of the character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
