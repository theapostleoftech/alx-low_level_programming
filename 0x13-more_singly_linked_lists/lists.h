#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
listint_t *find_listint_loop(listint_t *head);
size_t free_listint_safe(listint_t **h);
size_t print_listint_safe(const listint_t *head);
listint_t *reverse_listint(listint_t **head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int sum_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int pop_listint(listint_t **head);
void free_listint2(listint_t **head);
listint_t *add_nodeint_end(listint_t **head, const int n);
listint_t *add_nodeint(listint_t **head, const int n);
size_t listint_len(const listint_t *h);



#endif
