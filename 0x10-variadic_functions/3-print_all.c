#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of arguments
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list printers;
	fmat types[] = {
		{ "c", print_ch },
		{ "d", print_in },
		{ "f", print_fl },
		{ "s", print_pt_ch }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(printers, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types[j].identifier)
			{
				types[j].f(separator, printers);
				separator = ", ";
			}
			j++
		}
		i++;
	}
	va_end(printers);
	printf("\n");
}

/**
 * print_ch - prints a char
 * @separator: the char separator
 * @printers: list of arguments
 *
 * Return: 0
 */

void print_ch(char *separator, va_list printers)
{
	printf("%s%c", separator, va_arg(printers, int));
}

/**
 * print_in - prints an integer
 * @separator: the int separator
 * @printers: a list of arguments
 *
 * Return: 0
 */

void print_in(char *separator, va_list printers)
{
	printf("%s%d", separator, va_arg(printers, int));
}

/**
 * print_fl - prints a float
 * @separator: the float separator
 * @printers: a list of arguments
 *
 * Return: 0
 */

void print_fl(char *separator, va_list printers)
{
	printf("%s%f", separator, va_arg(printers, double));
}

/**
 * print_pt_ch - prints a char pointer
 * @separator: the pointer separator
 * @printers: list of arguments
 *
 * Return: 0
 */
void print_pt_ch(char *separator, va_list printers)
{
	char *ps = va_arg(printers, char *);

	if (ps == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, ps);
}
