#include "lists.h"
/**
 * add_dnodeint_end -  adds node at the end
 * @head: the head of a linked list
 * @n: data for the new node
 * Return: the adress of new nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	return (new);
}
