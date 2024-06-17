#include "main.h"
/**
 * more_numbers - prints from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;

	for (int i = 0; i < 11; i++)
	{
		while (a <= 14)
		{
			if (a > 9)
				_putchar('1');
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
	}
}
