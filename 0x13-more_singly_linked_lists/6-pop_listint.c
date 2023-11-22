#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int d;
	listint_t *f_node = *head;

	if (!f_node)
		return (0);

	d = (*head)->n;
	*head = f_node->next;
	free(f_node);
	return (d);
}

