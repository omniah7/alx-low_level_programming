#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* add_node_end - adds a new node at the end of a list_t list
* @head: the first element of the list
* @str: a string
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = malloc(sizeof(list_t));
	unsigned int l;
	char *dup = strdup(str);
	list_t *node = *head;

	if (dup == NULL || tail == NULL)
	{
		free(tail);
		return (NULL);
	}
	for (l = 0; dup[l] != '\0'; l++)
		;
	tail->str = dup;
	tail->len = l;
	tail->next = NULL;
	if (node != NULL)
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = tail;
	}
	else
		node = tail;
	return (node);
}

