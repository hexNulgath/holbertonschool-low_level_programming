#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to find from
 * @needle: string to find
 * Return: returns a string pointing to  the beginin of substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int r = 0;
	char *pNeedle;

	while (haystack[i] !=  '\0')
	{
		if (needle[r] == haystack[i])
		{
			while (needle[r] != '\0')
			{
				if (needle[r] == haystack[i])
				{
					r++;
					i++;
					if (needle[r] == '\0')
					{
						pNeedle = &haystack[i-r];
						return (pNeedle);
					}
				}
				else
					break;
			}
			r = 0;
		}
		i++;
	}
	return ("nil");
}
