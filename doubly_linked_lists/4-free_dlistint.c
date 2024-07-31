#include "lists.h"
/**
 * free_dlistint -  free a list
 * @head: the head of a linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
