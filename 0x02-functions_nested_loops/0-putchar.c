#include "main.h"
/**
 * main - This program prints _putchar followed by a new line.
 * Return: 0
 *
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, s;

	s = sizeof(str) / sizeof(int);
	for (count = 0; count < s; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
