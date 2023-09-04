#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be readed
 * @text_content: the text inside the file.
 * Return: 2 success, otherwise 0
 */

int create_file(const char *filename, char *text_content)
{
	int file, a;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (a = 0; *(text_content + a) != '\0'; a++)
		;
	write(file, text_content, a);
	close(file);
	return (1);
}
