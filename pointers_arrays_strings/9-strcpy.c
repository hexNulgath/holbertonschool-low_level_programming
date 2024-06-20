#include "main.h"
/**
 * _strcpy - copy a string to a buffer destination
 * @src: pointer to a string
 * @dest: buffer pointer destination
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i != \0)
	{
		*src[i] = *dest[i];
		i++;
	}
	if (i == \0)
		*src[i] = *dest[i];
	return (dest);
}
