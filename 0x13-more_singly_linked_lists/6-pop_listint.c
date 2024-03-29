#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: the head of the list
* Return: the head node�s data (n). 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}

