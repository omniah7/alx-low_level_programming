#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* @h: a pointer to a list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n",h->len ,h->str);
		h = h->next;
		elements++;
	}
	printf("-> %u elements\n", elements);
	return (elements);
}

