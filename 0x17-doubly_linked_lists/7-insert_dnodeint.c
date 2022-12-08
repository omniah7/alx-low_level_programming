#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to pointer to head of a doubly linked list
 * @idx: index of the list where the new node should be added. starts at 0
 * @n: the number to be inserted
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
unsigned int idx, int n)
{
	dlistint_t *current, *new;

	current = (*head);
	if (!head)
		return (NULL);

	if (idx == 0 && current)
	{
		return (add_dnodeint(head, n));
	}
	for (; idx != 0; idx--)
	{
		if (!current)
		{
			return (NULL);
		}
		current = current->next;
	}

	if (!current->next)
	{
		return (add_dnodeint_end(head, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = current;
	new->prev = current->prev;

	current->prev = new;
	new->prev->next = new;

	return (new);
}
