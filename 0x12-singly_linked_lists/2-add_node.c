#include "lists.h"
/**
 * add_node - adds a new node
 * @head: head of the list
 * @str: string to be returned
 *
 * Return: no of nodes in list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;
	*head = n;

	return (*head);
}
