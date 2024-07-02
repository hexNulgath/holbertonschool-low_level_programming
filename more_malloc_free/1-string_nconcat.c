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
	unsigned int size1;
	unsigned int size2;
	unsigned int i = 0;
	unsigned int z;

	if (s1 == NULL || s1[0] == '\0')
		size1 = 0;
	else
		size1 = sizeof(s1) - 1;
	if (s2 == NULL || s1[0] == '\0')
		size2 = 0;
	else
		size2 = sizeof(s2) - 1;
	if (n > size2)
		p = malloc((size1 + size2 + 1) * sizeof(char));
	else
		p = malloc((size1 + n + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; i < size1 && s1[i] != '\0'; i++)
			p[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (z = 0; z < n && s2[z] != '\0'; z++)
		{
			p[i] = s2[z];
			i++;
		}
	}
	p[i] = '\0';
	return (p);
}
