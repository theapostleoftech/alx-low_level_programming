#include "lists.h"
/**
 * add_node_end - adds a node at the end of the list
 * @head: head of the list
 * @str: string to be added
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;

	t = *head;

	if (t == NULL)
		*head = n;
	else
	{
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = n;
	}
	return (*head);
}
