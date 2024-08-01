#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of a linked list
 * @idx: index to insert new node
 * @n: data for the new node
 * Return: the adress of new nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	if (current == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next = new;
	if (current->next != NULL)
		current->next->prev = new;
	return (new);
}
