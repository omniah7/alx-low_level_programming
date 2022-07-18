#include "lists.h"
#include <stdio.h>
/**
* print_listint - prints all the elements of a listint_t list
* @h: a head of a list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%lu\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}

