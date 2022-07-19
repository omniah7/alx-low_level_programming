#include "lists.h"
#include <stdlib.h>
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: the head of the list
* @index: the index of the node, starting at 0
* Return: the nth node. NULL if the node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);

	while (index--)
		tmp = tmp->next;
	return (tmp);
}
