#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to pointer to head of a doubly linked list
 * @idx: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *current = (*head);

	if (!head || !current)
		return (-1);
	if (idx == 0)
	{
		if (current->next)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	for (; idx != 0; idx--)
	{
		if (!current)
			return (-1);
		current = current->next;
	}
	if (!current->next)
		current->prev->next = NULL;
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
