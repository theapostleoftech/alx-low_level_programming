#include <stdio.h>
/**
 * pre_main - runs before the main
 *
 * Return: returns nothing/void
 */
void __attribute__ ((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
