#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
