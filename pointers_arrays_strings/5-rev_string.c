#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	char reverse[];
        int r = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		reverse[r] = s[i];
		r--;
	}
	_putchar('\n');
}
