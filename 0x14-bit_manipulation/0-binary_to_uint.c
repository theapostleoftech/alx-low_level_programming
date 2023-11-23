#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned
 * @b: string that is 0 and 1
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int pwr = 1;
	int a = 0;

	if (!b)
		return (0);
	while (b[a])
		a++;

	a--;
	while (a >= 0)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		if (b[a] == '1')
			total += pwr;
		a--;
		pwr += pwr;
	}
	return (total);
}
