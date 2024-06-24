#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: a string
 * Return: a string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] < 123 && s[i] > 96)
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] == 32 || s[i] == '\n' || s[i] == '\b' || s[i] == 44 || s[i] == 9)
		{
			i++;
			if (s[i] < 123 && s[i] > 96)
			{
				s[i] = s[i] - 32;
			}
		}
			i++;
	}
	return (s);
}
