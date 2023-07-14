#include <stdio.h>
/**
 * main - Entry point
 *
 * description: prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
