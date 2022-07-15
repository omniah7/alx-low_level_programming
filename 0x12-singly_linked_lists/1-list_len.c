#include "lists.h"

/**
 * list_len - returns number of elements of a list_t list
 * @h: a pointer to a list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
		return (elements);

}

