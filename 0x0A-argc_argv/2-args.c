#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Sucess)
 */

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
