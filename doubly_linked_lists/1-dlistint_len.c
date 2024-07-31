#include "lists.h"
/**
 * dlistint_len -  returns elements of a list
 * @h: the head of a linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
