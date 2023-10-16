#include "main.h"

/**
 * _isdigit - Checks for digits
 * @c: character to be checked
 * Return: 1 if character is a digit, 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

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

/**
 * _puts - prints a string followed by new line
 * @s: array pointer
 * Return: void
 */
void _puts(char *s)
{
	int a;

	a = 0;
	while (s[a])
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

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
