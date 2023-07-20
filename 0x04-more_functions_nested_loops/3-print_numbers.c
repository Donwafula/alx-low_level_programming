#include "main.h"

/**
 * print_numbers - Prints integers 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
