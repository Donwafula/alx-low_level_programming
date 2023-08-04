#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int a;
	int b = 0;
	int sig = -1;
	int brk = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			sig = sig * -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
			b = b * 10;
			b -= (s[a] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	b = sig * b;
	return (b);
}
