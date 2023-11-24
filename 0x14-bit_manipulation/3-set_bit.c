#include "main.h"
/**
 * set_bit - set the value of bit to 1 at index
 * @n: integer number
 * @index: index starts from 0
 *  
 *  Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1 << index;

	if (index > sizeof((*n)) * 8))
		return (-1);

	*n = *n | a;
	return (1);
}
