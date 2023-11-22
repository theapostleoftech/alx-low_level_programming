#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the list.
 * Return: pointer to the first node of the reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *other_node, *next_node;

	if (!head)
		return (NULL);

	other_node = NULL;
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = other_node;
		other_node = *head;
		*head = next_node;
	}
	*head = other_node;
	return (*head);
}
