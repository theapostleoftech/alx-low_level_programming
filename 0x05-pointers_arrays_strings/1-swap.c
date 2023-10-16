#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
  int *a = &b;
  int *b = &a;

  int *c = a;
  a = b;
  b = c;
}
