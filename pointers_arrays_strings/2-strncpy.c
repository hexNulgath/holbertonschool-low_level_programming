#include "main.h"
/**
 * _strncpy - copy a string
 * @src: a string to append
 * @dest: string of destinaton
 * @n: an int defining maximum number of src to copy
 * Return: a pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char **pDest = &dest;
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';


	return (*pDest);
}
