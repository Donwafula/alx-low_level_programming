#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * @n: limit to copy the second string to the first string
 * Return: joined string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *catStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n > j)
		n = j;
	catStr = malloc(((i + n) + 1));
	if (catStr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		catStr[i] = s1[i];
	}
	for (j = 0; j != n; j++)
	{
		catStr[i] = s2[j];
		i++;
	}
	catStr[i] = '\0';
	return (catStr);
}
