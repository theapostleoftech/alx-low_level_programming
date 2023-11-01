#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - combine two strings
 * @s1: First string to combine
 * @s2: Second string to combine
 *
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *blank;
	int i, len1, len2, j;

	blank = "";
	if (s1 == NULL)
		s1 = blank;
	if (s2 == NULL)
		s2 = blank;
	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	s3 = malloc((len1 + len2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}

