#include "main.h"
#include <stdio.h>

int check_read_write(char *filename, char mode);
void check_closeFD(int file_dr);

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
	char buffer[1024];
	ssize_t file_dr1, file_dr2;
	ssize_t byte_to_read, byte_to_write;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	
	file_dr1 = check_read_write(argv[1], 'R');
	file_dr2 = check_read_write(argv[2], 'W');

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

	check_closeFD(file_dr1);
	check_closeFD(file_dr2);

	return (0);
}

/**
 * check_read_write - checks the status of the
 * file descriptor
 *
 * @filename: name of the file
 * @mode: read or write
 *
 * Return: file descriptor
 */

int check_read_write(char *filename, char mode)
{
	ssize_t file_dr;
	
	if (mode == 'R')
	{
		file_dr = open(filename, O_RDONLY);

		if (file_dr == -1)
		{
			dprintf(STDOUT_FILENO, "%s %s\n", "Error: Can't read from file", filename);
			exit(98);
		}

		return (file_dr);
	}

	if (mode == 'W')
	{
		file_dr = open(filename, O_WRONLY | O_TRUNC);

		if (file_dr == -1)
		{
			file_dr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

			if (file_dr == -1)
			{
				dprintf(STDOUT_FILENO, "%s %s\n", "Error: Can't write to", filename);
				exit(99);
			}
		}
	}

	return (file_dr);
}

/**
 * check_closeFD - closes file descriptor
 *
 * @file_dr: file descriptor
 * 
 * Return: void
 */

void check_closeFD(int file_dr)
{
	int close_val;

	close_val = close(file_dr);

	if (close_val == -1)
	{
		dprintf(STDOUT_FILENO, "%s %d\n", "Error: Can't close fd", file_dr);
		exit(100);
	}
}
