#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar('1');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
