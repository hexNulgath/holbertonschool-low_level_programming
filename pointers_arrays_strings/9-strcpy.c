#include "main.h"
/**
 * _strcpy - copy a string to a buffer destination
 * @src: pointer to a string
 * @dest: buffer pointer destination
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	
	return (dest);
}
