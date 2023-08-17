#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: input separator
 * @n: input number
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int c;

	va_start(va, n);
	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(va, const unsigned int));
		if (separator != NULL && c != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
