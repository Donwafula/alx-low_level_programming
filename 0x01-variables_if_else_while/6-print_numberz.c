#include <stdio.h>
/**
 * main - Entry point
 *
 * description: prints all singledigit numbers with putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char a;

	a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
