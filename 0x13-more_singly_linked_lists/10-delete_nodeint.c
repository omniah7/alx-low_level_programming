#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - deletes the node at index of a listint_t list
* @head: the head of the list
* @index: the index of the node that should be deleted. Index starts at 0
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleted, *node = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free (node);
		return (1);
	}
	while (index > 1)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
		index --;
	}
	deleted = node->next;
	node->next = node->next->next;
	free (deleted);
	return (1);
}
