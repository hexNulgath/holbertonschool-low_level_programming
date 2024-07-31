#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a list
 * @head: the head of a linked list
 * @index: index of the node
 * return: ponter to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
