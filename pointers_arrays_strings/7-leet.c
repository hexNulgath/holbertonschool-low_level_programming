#include "main.h"
/**
 * leet - encodes a string to 1337
 * @s: a string
 * Return: string of char
 */

char *leet(char *s)
{
	int i;
	char input[5] = {'a', 'e', 'o', 't', 'l'}; 
	char output[5] = {'4', '3', '0', '7', '1'}; 
	int r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (r < 6)
		{
			if (s[i] == input[r] || s[i] == input[r] - 32)
			{
				s[i] = output[r];
			}
			r++;	
		}
		r = 0;
	}

	return (s);
}
