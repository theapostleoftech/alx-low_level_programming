#include "lists.h"
/**
 * list_len - prints number of element in a list
 * @h: head of the list
 *
 * Return: no of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t a;

	a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
