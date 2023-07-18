#include <stdio.h>
/**
 * print_alphabet - Entry point
 * description: prints alphabets in lower case
 * Return: Always 0
 */
int main(void)
{
        char a = 97, b = 0;

        while (b < 10)
	{
		while (a <= 122)
		
		{
			putchar(a);
			a++;
		}
		putchar('\n');
	}
	putchar('\n');
	b++;
	return 0;
}
