#include "main.h"

/**
 * append_text_to_file - appends text to the end
 * of a file
 *
 * @filename: name of the file
 * @text_content: content to be appended
 *
 * Return: 1 upon sucess and -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t byte_to_write;
	size_t string_length;
	int index, file_dr;

	if (filename == NULL)
		return (-1);

	file_dr = open(filename, O_WRONLY | O_APPEND);

	if (file_dr == -1)
		return (-1);

	string_length = 0;

	if (text_content != NULL)
	{
		for (index = 0; text_content[index] != '\0'; index++)
			string_length++;

		byte_to_write = write(file_dr, text_content, string_length);

		if (byte_to_write == -1)
			return (-1);
	}

	close(file_dr);

	return (1);
}
