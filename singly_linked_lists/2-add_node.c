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
 * add_node -  adds a new node at the beginning of a list
 * @head: the head of a linked list
 * @str: string to copy on new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *lk = malloc(sizeof(struct list_s));
	lk->len = _strlen(str);
	lk->str = strdup(str);
	lk->next = *head;
	*head = lk;
	if (lk == NULL)
		return (NULL);
	else
		return (lk);
}
