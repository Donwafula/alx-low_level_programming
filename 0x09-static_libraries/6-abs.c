#include "main.h"

/**
 * _abs - Computes absolute value of an interger
 * @c: number to be computed
 * Return: Absolute value of zero
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abso_val;

		abso_val = n * -1;
		return (abso_val);
	}
	return (n);
}
