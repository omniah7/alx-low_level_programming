#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: the head of the list
* @idx: the index of the list where the new node should be added
* @n: an integer
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
	}
	else
	{
		for (i = 1; i < idx; i++)
		{
			if (node == NULL)
			{
				free(new);
				return (NULL);
			}
			node = node->next;
		}
		new->next = node->next;
		node->next = new;
	}
	return (new);
}
