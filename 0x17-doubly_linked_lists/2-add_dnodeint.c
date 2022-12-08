#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to poninter to head of a doubly linked list
 * @n: the number to be inserted
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;


	new->n = n;
	new->prev = NULL;
	new->next = current;
	if (!current || !head)
	{
		current->prev = new;
	}
	return (new);
}
