#include <stdio.h>
#include <stdlib.h>
/**
 * main - generates opcodes.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: the opcodes
 */
int main(int argc, char **argv)
{
	int a, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < n; a++)
	{
		printf("%02hhx", ((char *)main)[a]);
		if (a == (n - 1))
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
