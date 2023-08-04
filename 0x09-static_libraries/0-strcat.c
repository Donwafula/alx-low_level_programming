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
