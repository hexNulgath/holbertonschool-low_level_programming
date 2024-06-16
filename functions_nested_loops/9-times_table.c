#include "main.h"
/**
 * times_table - prints table of 9
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int r;

	_putchar('0');
	while (a < 10 && b < 10)
	{
		while (a < 10)
		{
			r = a * b;
			_putchar(',');
			_putchar(' ');
			if (r / 10 != 0)
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			if (r / 10 == 0)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			a++;
		}
		_putchar('\n');
		_putchar('0');
		a = 0;
		b++;
	}
}
