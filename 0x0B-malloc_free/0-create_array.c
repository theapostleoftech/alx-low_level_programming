#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: 
 * @c: char to be assigned to array
 * 
 * Returns: NULL, if size = 0 or a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
    if (size == 0)
    {
        return NULL;
    }

    char *array = (char *)malloc(size * sizeof(char));

    if (array == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < size; i++)
    {
        array[i] = c;
    }
    return array;
}
