#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: a pointer to a list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	list_t *node;
	unsigned long count = 0, elements = 0;

	node = h;
	while (node != NULL)
	{
		printf("[%lu] %s\n",node->len ,node->str);
		node = node->next;
		count++;
	}
	printf("-> %lu elements\n", elements);
	return (elements);
}


