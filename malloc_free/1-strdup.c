#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @str: size of array
 * Return: NULL or a pointer to the array
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0;
	unsigned int size;

	size = sizeof(str) + 1;
	p = malloc((size) * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	if (str[i] == '\0')
		p[i] = str[i];
	return (p);
}
