#include "main.h"

/**
 * _strlen - returns the length of a string
 * strlen - retuns the length of a string
 * @s : string parameter
 *
 * Return: string length.
 */
int _strlen(char *s)
{
int y = 0;
for (; *s != '\0'; s++)
y++;
return (y);
}
