#include "main.h"
/**
 * string_toupper - makes all char to uppercase
 * @s: a character array
 * Return: a string in upper
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
