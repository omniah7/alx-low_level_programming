#include "lists.h"
/**
* reverse_listint - reverses a listint_t linked list
* @head: the head of the list
*
* Description: You are not allowed to use more than 1 loop
* You are not allowed to use malloc, free or arrays
* You can only declare a maximum of two variables in your function
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *holder, *tail = *head;

	while (tail->next != NULL)
	{
		holder = tail->next->next;
		tail->next->next = *head;
		*head = tail->next;
		tail->next = holder;
	}
	return (*head);

}
