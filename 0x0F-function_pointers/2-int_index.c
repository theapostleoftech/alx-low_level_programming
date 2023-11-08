#include "function_pointers.h"

/**
 * int_index - a function that searches for integer
 * @array: the array
 * @size: no of elements in the array
 * @cmp: pointer to the function
 *
 * Return: -1
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int o = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (o < size)
			{
				if (cmp(array[o]))
					return (o);

				o++;
			}
		}
	}

	return (-1);
}
