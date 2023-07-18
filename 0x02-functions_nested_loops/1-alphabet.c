#include "main.h"
/**
 * print_alphabet - Entry point
 * description: prints alphabets in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
