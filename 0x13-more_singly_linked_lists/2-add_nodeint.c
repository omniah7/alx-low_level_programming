#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: the head of the list
* @n: an integer
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}

