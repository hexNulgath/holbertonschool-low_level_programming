#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to examin
 * @accept: characters to acept
 * Return: a pointer to the accept bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int r = 0;
	char * pS = accept;

	while (s[i] !=  '\0')
	{
		while (accept[r] != '\0')
		{
			if (*pS == s[i])
				return (char *)s;						
			r++;
		}
		r = 0;
		i++;
	}
		return ("nil");
}
