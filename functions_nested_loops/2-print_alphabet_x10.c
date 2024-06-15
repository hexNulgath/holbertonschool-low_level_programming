#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet
 * Description: 'print alphabet 10 times'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int n = 1;

	do {
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
		i = 'a';
	} while (n < 11);
}
