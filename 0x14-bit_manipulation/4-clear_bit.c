#include "main.h"
/**
 * clear_bit - set the value of bit to 0
 * @n: integer number
 * @index: index starts at 0
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = ~(1 << index);

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n & x;
	return (1);
}
