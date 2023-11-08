#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates though the array
 * @size: size of the array
 * @action: pointer to the function
 * @array: the array  itself
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
