#include "main.h"
/**
 * _strlen - total of characters in string
 * @s: a string pointer
 * Return: length
 */

int _strlen(char *s)
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
