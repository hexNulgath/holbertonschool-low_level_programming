#include "main.h"
/**
 * leet - encodes a string to 1337
 * @s: a string
 * Return: string of char
 */

char *leet(char *s)
{
	int i = 0;
	char letters[5] = {'a', 'e', 'o', 't', 'l'}; 
	char rep[5] = {'4', '3', '0', '7', '1'}; 
	int r = 0;

	while (s[i] != '\0')
	{
		while (r < 6)
		{
			if (s[i] == letters[r] || s[i] == letters[r] - 32)
			{
				s[i] = rep[r];
			}
			r++;	
		}
		r = 0;
		i++;
	}
	
	return (s);
}
