#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: the head of the list
* @n: an integer
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *tail = malloc(sizeof(listint_t));

	if (tail == NULL)
	{
		free(tail);
		return (NULL);
	}
	tail->n = n;
	tail->next = NULL;
	if (last == NULL)
	{
		*head = tail;
		return (tail);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = tail;
	return (tail);
}
