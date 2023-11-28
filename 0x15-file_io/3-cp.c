#include "main.h"

int close_file(int fd);
void display_read_error(char *file);
void display_write_error(char *file);

/**
 * close_file - close a file
 * @fd: file descriptor
 *
 * Return: -1 if error and 1 if successful
 */
int close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (-1);
	}
	return (1);
}

/**
 * display_read_error - prints error on reading of file
 * @file: file to be read
 *
 * Return: nothing
 */
void display_read_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
}

/**
 * display_write_error - print error on writing to file
 * @file: file to be written to
 *
 * Return: nothing
 */
void display_write_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file);

}

/**
 * main - copy the content of file A to file B
 * @argc: number of arguments
 * @argv: array of pointers to the argument
 *
 * Return: copy
 */
int main(int argc, char **argv)
{
	int file_from, file_to, re, wr;
	char buffer_size[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		display_read_error(argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | 0_WRONLY | 0_TRUNC, 0064);
	if (file_to == -1)
	{
		display_write_error(argv[2]);
		close_file(file_from);
		exit(99);
	}
	do {
		re = read(file_from, buffer, 1024);
		if (re == -1)
		{
			display_read_error(argv[1]);
			close_file(file_from);
			close_file(file_to);
			exit(98);
		}
		wr = write(file_to, buffer, re);
		if (wr == -1)
		{
			display_write_error(argv[2]);
			close_file(file_from);
			close_file(file_to);
			exit(99);
		}
	} while (re >= 1024);

	if (close_file(file_from) < 0)
			exit(100);
	if (close_file(file_from) < 0)
			exit(100);
	if (close_file(file_to) < 0)
	{
		close_file(file_from);
		exit(100);
	}
	return (0);

}
