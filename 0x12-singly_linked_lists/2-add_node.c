#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @h: array of list_t pointers
 * @str: a string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l;
	char *dup = strdup(str);

	/**if (dup == NULL || *head == NULL)
	{
		return (NULL);
	}*/
	for (l = 0; dup[l] != '\0'; l++)
		;
	new = malloc(sizeof(list_t));
	new->str = dup;
	new->len = l;
	new->next = *head;
	return (new);
	
}

