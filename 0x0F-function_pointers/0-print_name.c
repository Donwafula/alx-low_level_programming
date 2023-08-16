#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
