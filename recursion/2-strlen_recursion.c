#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: a string to print
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int f;
	
	if (*s == '\0')
		f = *s;
	else
	{
		s++;
		_print_rev_recursion(s);
	}
	return (f - *s);
}
