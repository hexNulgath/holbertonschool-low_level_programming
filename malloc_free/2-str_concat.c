#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or a pointer to the array
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i = 0;
	unsigned int z = 0;
	unsigned int size;

	size = 0;
	if (s1 == NULL)
	       s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';	
	while (s1[i] != '\0')
	{
		i++;
		size++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		size++;
	}
	i = 0;
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[z] != '\0')
	{
		p[i] = s2[z];
		i++;
		z++;
	}
	if (s2[z] == '\0')
		p[i] = s2[z];
	return (p);
}
