#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints a list
 * @h: a list to be printed
 *
 * Return: the element linked
 */
size_t print_listint(const listint_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
