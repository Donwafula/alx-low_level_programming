#include "main.h"

/**
 * _memcpy - fills memory with another buffer.
 * @dest: source string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	y = 0;
	while (y < n)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}

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

/**
 * _strspn - Gets lenght of a prefix substring
 * @s: pointer to string to be checked
 * @accept: pointer to string containing acceptedstring
 * Return: new string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing accepted bytes
 * Return: new string
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				break;
			}
		}
		if (*(accept + b) != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: The substring in the string
 */
char *_strstr(char *haystack, char *needle)
{
	int letter, needle_size, i;
	char *pos;

	letter = 0;
	needle_size = _strlen(needle);
	if (needle_size == 0)
		return (haystack);

	for (; *haystack != 0; haystack++)
	{
		if (*haystack == needle[0])
		{
			pos = haystack;
			for (i = 0; needle[i] != 0 && *haystack != 0; i++, haystack++)
			{
				if (*haystack != needle[i])
				{
					letter = 0;
					break;
				}
				letter++;
			}
		}
	}

	if (letter == needle_size)
		return (pos);

	return (0);
}
