#include "main.h"

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
