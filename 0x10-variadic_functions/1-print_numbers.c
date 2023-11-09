#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed
 *
 * Return 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	char separator[] = ',';
	unsigned int i;

	if (separator == NULL)
	{
		return (EXIT_SUCCESS);
	}

	va_start(num, n);
	for (i = n; i >= 0; i = va_arg(num, int))
		printf("%d%c", i, separator);
	va_end(num);
	putchar('\n');

}
