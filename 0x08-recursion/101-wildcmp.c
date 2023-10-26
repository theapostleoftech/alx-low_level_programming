#include "main.h"
#include <stdio.h>

int wildcmp(char *s1, char *s2);

/**
 * wildcmp - Compares two strings with wildcard '*'.
 * @s1: The first string.
 * @s2: The second string with '*' as a wildcard.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2) 
{
	/* If we've reached the end of both strings, they are identical. */
	if (*s1 == '\0' && *s2 == '\0') 
	{
		return 1;
	}

	/* If the current characters match, move to the next character in both strings. */
	if (*s1 == *s2) 
	{
		return wildcmp(s1 + 1, s2 + 1);
	}

	/* If s2 contains a '*', try two possibilities:
	 * 1. '*' represents an empty string in s1 (skip '*').
	 * 2. Match the current character of s1 with the '*' in s2.
	 */
	if (*s2 == '*') 
	{
		return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
	}

	/* If none of the above conditions met, the strings are not identical. */
	return 0;
}

/**
 * main - Check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = wildcmp("main.c", "ma*********************************************************d");
	printf("%d\n", r);
	return (0);
}
