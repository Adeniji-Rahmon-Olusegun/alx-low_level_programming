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
	size_t string_length;
	int index, file_dr, byte_to_write;

	if (filename == NULL)
		return (-1);

	file_dr = open(filename, O_WRONLY | O_TRUNC);

	if (file_dr == -1)
	{
		file_dr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

		if (file_dr == -1)
			return (-1);
	}

	index = 0;
	string_length = 0;

	if (text_content != NULL)
	{
		while (text_content[index] != '\0')
		{
			string_length++;
			index++;
		}
	
		byte_to_write = write(file_dr, text_content, string_length);

		if (byte_to_write == -1)
			return (-1);
	}

	close(file_dr);

	return (1);
}
