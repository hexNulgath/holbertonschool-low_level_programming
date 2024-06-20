#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	while (length > 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
