#include "main.h"
/**
 * main - Entry point
 * Description: 'print alphabet'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while ( i <= 'z')
	{
		_putchar(i);
		i++;
	}
	return (0);
}
