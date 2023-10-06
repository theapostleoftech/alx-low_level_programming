#include <stdio.h>
/**
 * main - this program is desogned to print all different
 * number combinations of two digits
 * Return: 0
 *
 */
int main(void)
{
	int x, y, z;

	x = 0;

	while (x < 100)
	{
		y = x % 10; /* single digits */
		z = x / 10; /* double digits */
		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');
			if (x < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
