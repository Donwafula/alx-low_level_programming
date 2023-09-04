#include "main.h"

/**
 * main - copy 1 file to another
 * @argc: argument counter
 * @argv: argument vector.
 * Return: 2 success, otherwise 0
 */

int main(int argc, char **argv)
{
	int from_f, to_f;
	unsigned long int s;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_f = open(argv[1], O_RDONLY);
	if (from_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	to_f = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (to_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	buf = malloc(1024);
	while ((s = read(from_f, buf, sizeof(buf))) != 0)
	{
		write(to_f, buf, s);
	}
	if (close(from_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_f);
		exit(99);
	}
	if (close(to_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_f);
		exit(99);
	}
	free(buf);
	return (0);
}
