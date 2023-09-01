#include "main.h"

/**
 * flip_bits - returns the differeces about digits between 2 numbers.
 * @n: input num 1
 * @m: input num 2
 * Return: the diferences
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c;

	for (c = i = 0; i < 64; i++, c++)
	{
		if (((n >> i) & 1) == ((m >> i) & 1))
		{
			c--;
		}
	}

	return (c);
}
