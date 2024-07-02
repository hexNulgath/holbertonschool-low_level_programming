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
	unsigned int size2;

	size = 0;
	size2 = 0;
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
		size2++;
	}
	i = 0;
	if (n > size2)
		p = malloc((size + size2 + 1) * sizeof(char));
	else
		p = malloc((size + n + 1) * sizeof(char));
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
