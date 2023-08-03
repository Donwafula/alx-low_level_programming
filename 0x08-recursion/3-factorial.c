#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: number to be checked
 * Return: -1 if n < 0 or factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
