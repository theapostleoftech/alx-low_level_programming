#include "main.h"

/**
 * _strlen : retuns the length of a string
 * @s : string parameter
 *
 * Return: 0.
 */
int _strlen(char *s)
{
  int len = 0;
  
  for (int i = 0; str[i] != '\0'; i++) {
    len++;
  }
  return len;
}
