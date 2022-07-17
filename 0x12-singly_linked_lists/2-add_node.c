#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: a string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *dup = strdup(str);
	unsigned int l;

	if (dup == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (l = 0; dup[l] != '\0'; l++)
		;

	new->str = dup;
	new->len = l;
	new->next = *head;
	*head = new;
	return (new);

}

