#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: pointer to a name
 * @f: function pointer
 *
 * Return: 0
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL) && (f != NULL)
		f(name);
}
