#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to sum parameters
 * @n: parameter n
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(all, n);
	for (i = 0; i <  n; i++)
	sum += va_arg(all, const unsigned int);
	va_end(all);
	return (sum);
}
