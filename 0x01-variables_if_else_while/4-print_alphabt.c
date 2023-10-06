#include <stdio.h>
/**
 * main - this program prints alphabets in
 * lowercase followed by a newline
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			ch++;
		}
	putchar('\n');
	return (0);
}
