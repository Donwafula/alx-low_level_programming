#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @*dest: pointer to first string
 * @*src: pointer to second string
 * Return: Always 0 (succeess)
 */
char *_strcat(char *dest, char *src)
{
	int len_a, b;

	len_a = 0;
	while (dest[len_a] != '\0')
	{
		len_a++;
	}
	for (b = 0; src[b] != '\0'; b++, len_a++)
	{
		dest[len_a] = src[b];
	}
	dest[len_a] = '\0';
	return (dest);
}

/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;

	while (*(src + lengthS) != '\0' && lengthD < 97 && lengthS < n)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
	*(dest + lengthD) = '\0';
	return (dest);
}

/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		*(dest + a) = *(src + a);
	for ( ; a < n; a++)
		*(dest + a) = '\0';
	return (dest);
}

/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}

/**
 * _memset - Fills memory with a constant byte
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
