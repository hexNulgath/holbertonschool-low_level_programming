#include "lists.h"
/**
 * free_list -  free a list_t
 * @head: the head of a linked list
 */
void free_list(list_t *head)
{
	struct list_s *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
