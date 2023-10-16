#include "main.h"

/**
 * _strlen : retuns the length of a string
 * @s : string parameter
 *
 * Return: 0.
 */
int _strlen(char *s)
{
  int y = 0;
  
  for (; *s != '\0'; s++) {
    y++;
  }
  return (y);
}
