#include "main.h"
#include "stdio.h"
/**
 * times_table - prints table of 9
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int r;

	while (a > 10 && b > 10)
	{
		while (a > 10)
		{
			r = a * b;
			printf("%d,  ", r);
			a++;
		}
		putchar('\n');
		a = 0;
		b++;
	}
}
