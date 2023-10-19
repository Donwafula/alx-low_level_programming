#include "shell.h"

/**
 *_eputs - Print a string to stderr.
 * @str: The string to be printed.
 * Return: Nothing.
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - Write a character to stderr.
 * @c: The character to print.
 * Return: On success, returns 1. On error, returns -1.
 */
int _eputchar(char c)
{
	if (write(2, &c, 1) == -1)
	{
		errno = EIO;
		return (-1);
	}
	return (1);
}

/**
 * _putfd - Write a character to the specified file descriptor.
 * @c: The character to print.
 * @fd: The file descriptor to write to.
 * Return: On success, returns 1. On error, returns -1.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - Write a string to the specified file descriptor.
 * @str: The string to be printed.
 * @fd: The file descriptor to write to.
 * Return: The number of characters written.
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
