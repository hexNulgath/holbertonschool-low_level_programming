#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
        int r = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (r = 0; r < i / 2; r++)
	{
		temp = s[r];
		s[r] = s[i - r];
		s[i - r] = temp;
	}
	_putchar('\n');
}
