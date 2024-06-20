#include "main.h"
/**
 * puts2 - prints pair string char
 * @str: a string
 * Return: void
 */

void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
			i++;
		}
		else
			i++;
	}
}
