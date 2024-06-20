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
	if (i % 2 == 0)
		r = i / 2;
	else
		r = (i - 1) / 2;

	while (r < i)
	{
		_putchar(str[r]);
		r++;
	}
	_putchar('\n');
}
