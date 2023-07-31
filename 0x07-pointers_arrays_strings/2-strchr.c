#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be located
 * Return: pointer to the first occurence of the character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int y;

	y = 0;
	while (s[y] != '\0')
	{
		if (s[y] == c)
		{
			return (s);
		}
		else
			y++;
	}
	if (s[y] == c)
	{
		return (s);
	}
	else
		return (0);
}
