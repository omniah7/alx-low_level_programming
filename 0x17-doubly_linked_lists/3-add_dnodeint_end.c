#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to head of a doubly linked list
 * @n: the number to be inserted
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	current = *head;
	if (!current)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	return (new);
}
