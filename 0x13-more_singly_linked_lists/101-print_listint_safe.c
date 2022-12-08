#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint_safe - prints a listint_t linked list
* @head: the head of the list
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node = head;

	if (head == NULL)
		exit(98);
	while (node != NULL)
	{
		printf("[%p] %i\n",(void *) &node, node->n);
		node = node->next;
		count++;
	}
	return (count);
}
