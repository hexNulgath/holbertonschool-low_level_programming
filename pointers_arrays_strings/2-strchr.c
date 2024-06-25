#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to inspect
 * @c: character to locate
 * Return: pointer to c in s
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != c)
	{
		if (s[i] == '\0')
			return ("nil");
		i++;
	}
	return (&s[i]);
}
