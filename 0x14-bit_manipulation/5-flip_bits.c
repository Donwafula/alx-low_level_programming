#include "main.h"

/**
 * flip_bits - returns the differeces about digits between 2 numbers.
 * @n: input num 1
 * @m: input num 2
 * Return: the diferences
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b_diff, ma = 0;
	int i, dig;
	unsigned int dif = 0;

	b_diff = n ^ m;/*1 if bit_n != bit_m (XOR)*/

	for (i = 63; i >= 0; i--)
	{
		ma = 1 << i;/*Creating a mask for extract the digit*/
		dig = (b_diff & m) >> i;/*Extract the digit and push to 0 or 1*/
		if (dig == 1)
			dif++;
	}
	return (dif);
}
