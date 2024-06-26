#include "main.h"
/**
 * _print_rev_recursion - prints a string in revers
 * @s: a string to print
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	s++;
	if (*s == '\0')
		return;
	_print_rev_recursion(s);
	_putchar(*s);
	s--;
	if (*s == '\n')
		_putchar('\n');
	s++;
}
