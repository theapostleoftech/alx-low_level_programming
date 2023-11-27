#include "main.h"
/**
 * flip_bits - number of bits flipped
 * @n: integer number
 * @m: second integer number
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number = n ^ m;
	unsigned int y = 0;
	int len = (sizeof(number) * 8);

	while (len >= 0)
	{
		if (number & 1)
			y++;
		number = number >> 1;
		len--;
	}
	return (y);
}
