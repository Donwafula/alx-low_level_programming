#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int w, l;

	for (w = 0; w < size; w++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
