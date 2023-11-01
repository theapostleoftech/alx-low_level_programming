#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return pointer to a new string after duplicating it
 * @str: string to be duplicated
 *
 * Return: Return NULL if string = NULL
 */
char *_strdup(char *str)
{
	char *cpstr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	cpstr = malloc(len * sizeof(*str));
	if (cpstr == NULL)
		return (NULL);
	while (i <= len)
	{
		cpstr[i] = str[i];
		i++;
	}
	return (cpstr);
}

