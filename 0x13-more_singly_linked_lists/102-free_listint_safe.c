#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_list(listp_t **head)
{
	listp_t *t;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *a, *new, *add;
	listint_t *c;

	a = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = a;
		a = new;

		add = a;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list(&a);
				return (nnodes);
			}
		}

		a = *h;
		*h = (*h)->next;
		free(c);
		nnodes++;
	}

	*h = NULL;
	free_list(&a);
	return (nnodes);
}
