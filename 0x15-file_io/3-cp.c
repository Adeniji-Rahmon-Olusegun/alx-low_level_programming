#include "main.h"
#include <stdio.h>

/**
 * main - copies content o a file to another
 * file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	char *buffer;
	int file_dr1, file_dr2;
	ssize_t byte_to_read, byte_to_write;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	buffer = (char *)malloc(1024);
	file_dr1 = open(argv[1], O_RDWR);
	if (file_dr1 == -1)
	{
		dprintf(STDOUT_FILENO, "%s %s\n", "Error: Can't read from file", argv[1]);
		exit(98);
	}

	file_dr2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_dr2 == -1)
	{
		dprintf(STDOUT_FILENO, "%s %s\n", "Error: Can't write to", argv[2]);
		exit(99);
	}
	while (byte_to_read != 0)
	{
		byte_to_read = read(file_dr1, buffer, 1024);
		if (byte_to_read == -1)
		{
			dprintf(STDOUT_FILENO, "%s %s\n", "Error: Can't read from file", argv[1]);
			exit(98);
		}
		byte_to_write = write(file_dr2, buffer, byte_to_read);
		if (byte_to_write == -1)
		{
			dprintf(STDOUT_FILENO, "%s %s\n", "Error: Can't write to", argv[2]);
			exit(99);
		}
	}
	return (0);
}
