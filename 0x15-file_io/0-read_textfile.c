#include "main.h"

/**
 * read_textfile - Reads txt file, prints it to
 *			POSIX STDOUT
 * @filename: name of file to be read
 * @letters: number of characters to print
 * Return: Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p_field;
	int file, r_file;

	if (filename == NULL)
	{
		return (0);
	}

	/*Create the buffer p_field*/
	p_field = malloc(letters * sizeof(char));
	if (p_field == NULL)
	{
		return (0);
	}

	/*Open the file*/
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	/*Read the file and save in buffer*/
	r_file = read(file, p_field, letters);
	/*Write as standard output*/
	write(STDOUT_FILENO, p_field, r_file);

	close(file);
	free(p_field);
	return (r_file);
}
