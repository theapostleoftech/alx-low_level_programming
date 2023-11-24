#include "main.h"
/**
 * get_endianness - checks the endianness
 * @void: nothing
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int a = 1;

	return ((int) (((char *)&a)[0]));
}
