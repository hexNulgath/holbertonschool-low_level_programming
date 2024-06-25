#include "main.h"
/**
 * _strspn - gets lenght of a prefixsubstring
 * @s: string to examin
 * @accept: characters to acept
 * Return: number bytes at start of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int r = 0;

	while (accept[r] !=  '\0')
	{
		if (accept[r] == s[i])
		{
			i++;
			r = 0;
		}
		else
			r++;
	}
	return (i);
}
