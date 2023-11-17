#include "lists.h"
/**
 * free_list - frees a list
 * @head: hesd of the linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *present;

	while ((present = head) != NULL)
	{
		head = head->next;
		free(present->str);
		free(present);
	}
			}
}
