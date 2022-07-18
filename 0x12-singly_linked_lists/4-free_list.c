#include "lists.h"
#include <stdlib.h>
/**
* free_list - rees a list_t list
* @head: the first element of the list
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}

