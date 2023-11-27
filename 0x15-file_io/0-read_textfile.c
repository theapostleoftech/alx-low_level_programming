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
	FILE *file;

	file = fopen(filename, "r + w");

	if (file == NULL)
	{
		perror("Error opening file");
		return (-1);
	}

	char buffer[letters];
	ssize_t bytes = fread(buffer, sizeof(char), sizeof(buffer), file);

	if (bytes == 0)
	{
		perror("Error reading file");
		fclose(file);
		return (0);
	}


	fclose(file);

	return (letters);
}
