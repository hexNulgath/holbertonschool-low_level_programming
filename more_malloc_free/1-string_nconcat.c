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
	unsigned int i = 0, z = 0, size = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		size++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;
	if (n > size2)
		p = malloc((size + size2 + 1) * sizeof(char));
	else
		p = malloc((size + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (; s2[z] != '\0' && z < n; z++)
	{
		p[i] = s2[z];
		i++;
	}
	p[i] = '\0';
	return (p);
}
