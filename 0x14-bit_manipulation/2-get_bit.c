#include "main.h"
/**
 * get_bit - return the value of bit
 * @n: integer number
 * @index: the index starting from 0
 *
 * Return: the value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;
	return (n & 1);
}
