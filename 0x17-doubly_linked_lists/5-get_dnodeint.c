#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to poninter to head of a doubly linked list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a the list, NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		head = head->next;
	}
	return (head);
}
