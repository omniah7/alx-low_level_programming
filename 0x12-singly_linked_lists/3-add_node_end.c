#include "lists.h"
#include <string.h>
/**
* add_node_end - adds a new node at the end of a list_t list
* @head: the first element of the list
* @str: a string
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
*/
list_t *add_node_end(list_t **head, const char *str)
{
	static list_t tail;
	static list_t *tailptr = &tail;
	unsigned int l;
	char *dup = strdup(str);

	if (*head == NULL || dup == NULL)
		return (NULL);
	for (l = 0; dup[l] != '\0'; l++)
		;
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	tail.str = dup;
	tail.len = l;
	tail.next = NULL;
	(*head)->next = tailptr;
	return (tailptr);
}

