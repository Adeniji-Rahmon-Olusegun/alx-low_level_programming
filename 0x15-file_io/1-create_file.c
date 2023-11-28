#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file to be created
 * @text_content: to be written in created file
 *
 * Return: 1 on sucess and -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int file_dr, byte_to_write;

	if (filename == NULL)
	{
		return (-1);
	}

	file_dr = open(filename, O_WRONLY | O_TRUNC);

	if (file_dr == -1)
	{
		file_dr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

		if (file_dr == -1)
			return (-1);
	}

	if (text_content == NULL)
	{
		file_dr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

		if (file_dr == -1)
			return (-1);

		return (1);
	}

	byte_to_write = write(file_dr, text_content, (sizeof(text_content) - 2));

	if (byte_to_write == -1)
	{
		return (-1);
	}

	return (1);
}
