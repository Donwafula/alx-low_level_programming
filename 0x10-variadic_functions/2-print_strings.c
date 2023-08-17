#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: input separator
 * @n: number of items
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int c;

	va_start(a, n);
	for (c = 0; c < n; c++)
	{
		char *s;

		s = va_arg(a, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (c + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
