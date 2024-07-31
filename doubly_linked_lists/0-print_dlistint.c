#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a list
 * @h: the head of a linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
