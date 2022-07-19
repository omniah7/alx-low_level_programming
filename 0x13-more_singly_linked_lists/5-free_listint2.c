#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}

