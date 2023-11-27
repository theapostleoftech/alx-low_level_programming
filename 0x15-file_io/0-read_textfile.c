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
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, "r");
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(0);

	return (wr);

}
