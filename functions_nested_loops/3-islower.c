#include "main.h"
/**
 * _islower - prints checks for lowercase
 * @c: a character to be checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c > 96 && c < 122)
		return (1);
	else
		return (0);
}
