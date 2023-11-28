#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to POSIX standard output
 *
 * @filename: name of file to read
 * @letters: number of characters to read and print
 *
 * Return: actual number of letters it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, file_dr;
	char buffer[BUFFER_SIZE];
	ssize_t byte_read, byte_tracker;

	if (filename == NULL)
		return (0);

	file_dr = open(filename, O_RDONLY);

	if (file_dr == -1)
		return (0);

	i = 0;
	byte_read = -1;
	byte_tracker = 0;

	while (byte_read != 0)
	{
		byte_read = read(file_dr, buffer, letters);

		if (byte_read == -1)
			return (0);

		byte_tracker += byte_read;
		buffer[byte_read] = '\0';

		while (buffer[i] != '\0')
		{
			_putchar(buffer[i]);

			i++;
		}
	}

	close(file_dr);

	return (byte_tracker);
}
