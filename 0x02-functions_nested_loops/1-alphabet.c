#include "main.h"
/**
 * main - Entry point
 * description: prints alphabets in lower case
 * Return 0 Success
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
	return (0);
}
