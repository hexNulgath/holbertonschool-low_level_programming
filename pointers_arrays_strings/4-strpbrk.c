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
	unsigned int z = 0;
	char * pS;

	while (s[i] !=  '\0')
	{
		while (accept[r] != '\0')
		{
			if (accept[r] == s[i])
				pS[z] = s[i];					
			r++;
		}
		r = 0;
		i++;
	}

	if (pS[0] == '\0') 
		return ("nil");
	else
		return (pS);
}
