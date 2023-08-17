#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>
/**
 * print_all - prints anything
 * @format: format to print a value
 */

void print_all(const char * const format, ...)
{
	va_list v;
	char *s;
	int i;

	i = 0;
	va_start(v, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(v, int));
				break;
			case 'f':
				printf("%f", va_arg(v, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(v, int));
				break;
			case 's':
				s = va_arg(v, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(v);
}
