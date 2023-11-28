#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: pointer to a filename
 * @letters: the number of letters read and printed
 *
 * Return: the number of letters read or 0 if null or cannot be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, re, wr;
	char *buffer;

	if (!filename || letters == 0)
		return (0);

	op = open(filename, O_RDONLY);

	if (op < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(op);
		return (0);
	}

	re = read(op, buffer, letters);
	close(op);

	if (re < 0)
	{
		free(buffer);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, re);
	free(buffer);

	if (wr < 0)
		return (0);

	return (wr);

}
