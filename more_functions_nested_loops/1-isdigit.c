#include "main.h"
/**
 * _isdigit - checks for a digit 0-9
 * @c: digit to check if upper
 * Return: returns 1 if it is a digit  0 otherwise (Success)
 */
int _isdigit(int c)
{
	if (c <= '9'  && c >= '0')
		return (1);
	else
		return (0);
}
