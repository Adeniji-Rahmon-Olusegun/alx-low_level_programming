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
	int file_dr;
	char *buffer;
	ssize_t byte_to_read, byte_tracker, byte_to_write;

	if (filename == NULL)
		return (0);

	file_dr = open(filename, O_RDWR);

	if (file_dr == -1)
		return (0);

	byte_to_read = -1;
	byte_tracker = 0;

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
		return (0);

	byte_to_read = read(file_dr, buffer, letters);
	
	if (byte_to_read == -1)
		return (0);

	byte_tracker = byte_to_read;
	
	byte_to_write = write(STDOUT_FILENO, buffer, byte_to_read);
	if (byte_to_read == -1 || byte_to_write < byte_to_read)
		return (0);

	close(file_dr);

	return (byte_tracker);
}
