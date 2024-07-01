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
	char *str1[];
	char *str2[];
	unsigned int i = 0;
	unsigned int z = 0;
	unsigned int size;

	size = 0;
	if (s1 == NULL)
	       str1[0] = '\0';
	else
		str1 = s1;
	if (s2 == NULL)
		str2[0] = '\0';
	else
		str2 = s2;	
	while (str1[i] != '\0')
	{
		i++;
		size++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		i++;
		size++;
	}
	i = 0;
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (str1[i] != '\0')
	{
		p[i] = str1[i];
		i++;
	}
	while (str2[z] != '\0')
	{
		p[i] = str2[z];
		i++;
		z++;
	}
	if (str2[z] == '\0')
		p[i] = str2[z];
	return (p);
}
