#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1 to 100 followed ny \n
 * for multiples of 3, print Fizz instead and Buzz for multiples of 5
 * print FizzBuzz for multiples of 15
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
