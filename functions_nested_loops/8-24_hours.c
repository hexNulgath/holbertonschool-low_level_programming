#include "main.h"
/**
 * jack_bauer - prints each minute
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int dhours = 0;
	int uhours = 0;
	int dmin = 0;
	int umin = 0;
	int hours = 0;

	while (hours < 24)
	{
		while (uhours < 10 && hours < 24)
		{
			while (dmin * 10 + umin < 60)
			{
				while (umin < 10)
				{
					_putchar(dhours + '0');
					_putchar(uhours + '0');
					_putchar(':');
					_putchar(dmin + '0');
					_putchar(umin + '0');
					_putchar('\n');
					umin++;
				}
				umin = 0;
				dmin++;
			}
			umin = 0;
			dmin = 0;
			uhours++;
			hours++;
		}
		umin = 0;
		dmin = 0;
		uhours = 0;
		dhours++;
	}
}
