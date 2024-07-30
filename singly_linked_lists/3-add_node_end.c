#include "lists.h"
/**
 * _strlen - total of characters in string
 * @s: a string pointer
 * Return: length
 */

int _strlen(const char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * add_node_end -  adds a new node at the end of a list
 * @head: the head of a linked list
 * @str: string to copy on new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *lk = malloc(sizeof(struct list_s));
	struct list_s *temp = *head;

	if (lk == NULL)
		return (NULL);
	lk->len = _strlen(str);
	lk->str = strdup(str);
	if (*head == NULL)
	{
		*head = lk;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = lk;
	}
	return (lk);
}
