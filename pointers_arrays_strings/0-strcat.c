#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: a string to append
 * @dest: string of destinaton
 * Return: a pointer to string dest
 */

char *_strcat(char *dest, char *src);
{
	char *pDest = &dest;
	int i = 0;
	int r = 0;

	if (src[i] == '\0')
	{
		while (src[r] != '\0')
		{
			dest[i] = src[r];
			r++;
			i++;
		}
		dest[i] = '\0';
	}
	else
		i++;
	return (pDest);
}
