#include "main.h"
#include <stdlib.h>

/**
 * string_noncat - concatenates two strings
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
	unsigned int i;
	unsigned int z;
	
	size1 = sizeof(s1);
	size2 = sizeof(s2);
	if (n > size2)
		p = malloc(size1 + size2 - 2);
	else
		p = malloc(size1 + n - 2);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1 - 3; i++)
		p[i] = s1[i];
	for (z = 0; z < n && s2[z] != '\0'; z++)
	{
		p[i] = s2[z];
		i++;
	}
	p[i] = '\0';
	return (p);
}
