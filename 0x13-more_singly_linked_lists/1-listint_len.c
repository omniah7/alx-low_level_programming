#include "lists.h"
/**
* listint_len - returns number of elements of the list
* @h: head of the list given
* Return: number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}

