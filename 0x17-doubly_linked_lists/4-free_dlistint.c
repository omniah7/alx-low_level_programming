#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to poninter to head of a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
