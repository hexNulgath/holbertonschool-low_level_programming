#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked list
 * @h: the head of a linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
