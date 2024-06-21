#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: a string to append
 * @dest: string of destinaton
 * @n: an int defining maximum number of src to copy
 * Return: a pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char **pDest = &dest;
	int i = 0;
	int r = 0;

	while (dest[i] != '\0')
		i++;

	while (src[r] != '\0' && r > n)
	{
		dest[i] = src[r];
		r++;
		i++;
	}
	dest[i] = '\0';

	return (*pDest);
}
