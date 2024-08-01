#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the node at index
 * @head: the head of a linked list
 * @index: index of node to delete
 * Return: 1 if succesfull
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (temp == *head)
	{
		*head = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}

	free(temp);
	return (1);
}
