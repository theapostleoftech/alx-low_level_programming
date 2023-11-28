#include "main.h"
/**
 * append_text_to_file - appends a text at the end of file
 * @filename: pointer to a file name
 * @text_content: null
 *
 * Return: -1 if filename is NULL or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, ap_write, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	ap_write = write(file, text_content, len);

	if (file < 0 || ap_write < 0)
		return (-1);

	close(file);

	return (1);
}
