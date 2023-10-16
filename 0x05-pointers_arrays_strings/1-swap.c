#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a : pointer variable a
 * @b : pointer variable b
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int box;

box = *a;
*a = *b;
*b = box;
}
