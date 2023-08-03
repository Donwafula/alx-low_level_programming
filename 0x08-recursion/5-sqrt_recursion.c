#include "main.h"

/**
 * _sqrt_recursion - returns squareroot of n
 * @n: number
 * Return: -1 or sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqr(n, 0));
}

/**
 * actual_sqr - finds natural sqrt
 * @n: sqrt
 * @a: iterate
 * Return: sqrt
 */
int actual_sqr(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqr(n, a + 1));
}
