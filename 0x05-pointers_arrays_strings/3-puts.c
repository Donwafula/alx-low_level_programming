#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: string array name
 * @*str: array pointer
 * Return: void
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
