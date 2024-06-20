#include "main.h"
/**
 * _puts - prints a string
 * @str: a string 
 * Return: void
 */

void _puts(char *str)
{
	int length = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		length++;
		i++;
	}
	_putchar('\n');
}
