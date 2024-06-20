#include "main.h"
/**
 * puts_half - prints half string
 * @str: a string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int r;

	while (str[i] != '\0')
	{
		i++;
	}

	r = (i - 1) / 2;

	if (r < i)
	{
		_putchar(str[r]);
		r++;
	}
	_putchar('\n');
}
