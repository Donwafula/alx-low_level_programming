#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of items
 * Return: sum of all its parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int c;
	int s;

	s = 0;
	va_start(a, n);

	if (n == 0)
		return (0);
	for (c = 0; c < n; c++)
	{
		s += va_arg(a, int);
	}
	va_end(a);
	return (s);
}
