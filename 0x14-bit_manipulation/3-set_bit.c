#include "main.h"

/**
 * set_bit - change to 1 the bit of a given index.
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0;

	if (index > 63)
	{
		return (-1);
	}

	m = 1 << index;/*Creating a mask to change the digit*/
	*n =  *n | m;/*Change the bit for 1*/
	return (1);
}
