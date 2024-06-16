#include "main.h"
/**
 * times_table - prints table of 9
 * Return: void
 */
void times_table(void)
{
	int a = 1;
	int b = 0;
	int r;

	while (a < 10 && b < 10)
	{
		_putchar('0');
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
		a = 1;
		b++;
	}
}
