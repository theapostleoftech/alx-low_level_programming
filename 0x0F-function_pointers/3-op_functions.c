#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - addition operation
  * @a: first integer
  * @b: secon integer
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - difference operation
  * @a: first integwr
  * @b: secind integer
  *
  * Return: diffeence
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply operation
  * @a: first intege
  * @b: second intege
  *
  * Return: result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division operation
  * @a: first integer
  * @b: second integer
  *
  * Return: quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modulo operation
  * @a: fist intger
  * @b: second integer
  *
  * Return: quotient
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
