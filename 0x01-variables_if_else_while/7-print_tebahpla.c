#include <stdio.h>
/**
 * main - Entry point
 *
 * decscription: prints lowercase alphabets in reverse
 *
 * return: Always 0
 */
int main(void)
{
	char a;

	a = 122;
	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
