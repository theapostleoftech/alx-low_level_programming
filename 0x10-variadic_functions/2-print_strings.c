#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints astring
 * @separator: the string to be printed between the strings
 * @n: the no of string sto print
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(string, n);

		while (i < n)
		{
			str = va_arg(string, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(string);
	}
	printf("\n");
}
