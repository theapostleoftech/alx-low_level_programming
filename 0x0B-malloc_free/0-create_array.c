#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to be assigned to array
 *
 * Return: NULL, if size = 0 or a pointer to the array
*/
char *create_array(unsigned int size, char c)
{

  char *array;
  unsigned int i;

  i = 0;
  if (size == 0)
    return (NULL);
  else
    array = malloc(size * sizeof(c));
  if (array == NULL)
    return (NULL);
  while (i < size)
    {
      array[i] = c;
      i++;
    }
  return (array);
}
