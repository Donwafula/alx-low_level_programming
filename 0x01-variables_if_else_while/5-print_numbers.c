#include <stdio.h>
/**
 * main - Entry point
 *
 * decsription: prints all numbers 0-9
 *
 * Return: always 0
 */
int main(void)
{
	char a;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
