#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @*s: pointer to the string
 * @s: array name
 * Return: lenght of the @s
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a])
	{
		a++;
	}
	return (a);
}
