#include "main.h"
/**
 * rev_string - this reverses a string
 * @s: string to be reversed
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int x, y, z;
	char *a, box;

	a = s;

	while (s[y] != '\0')
	{
		y++;
	}

	for (z = 1; z < y; z++)
	{
		a++;
	}

	for (x = 0; x < (y / 2); x++)
	{
		box = s[x];
		s[x] = *a;
		*a = box;
		a--;
	}
}
