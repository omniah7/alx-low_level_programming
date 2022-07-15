#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* @h: a pointer to a list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	list_t *node;
	size_t elements = 0;

	node = h;
	while (node != NULL)
	{
		printf("[%ui] %s\n",node->len ,node->str);
		node = node->next;
		elements++;
	}
	printf("-> %lu elements\n", elements);
	return (elements);
}

