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
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
