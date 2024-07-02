#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to reallocate
 * Return: pointer to the reserved
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int z = 0;
	unsigned int size;

	size = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
		if (i > n)
			break;
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
	while (s2[z] != '\0' && z < n)
	{
		p[i] = s2[z];
		i++;
		z++;
	}
	if (s2[z] == '\0')
		p[i] = s2[z];
	return (p);
}
