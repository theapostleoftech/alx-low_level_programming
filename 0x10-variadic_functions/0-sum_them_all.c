#include <stdio.h>
#include "variadic_functons.h"

/**
 * sum_them_all - function to sum parameters
 * @n: parameter n
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list sum_all;

	va_start(sum_all, n);
	int sum = 0;
	int i;

	for (i = 0; i <= n; i++)
	{
		sum += va_arg(sum_all, const unsigned int);
	}

	va_end(sum_all);
	return (0);
}
