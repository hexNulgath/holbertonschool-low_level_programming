#include "main.h"
/**
 * _pow - returns pow of given number
 * @x: a number to rise
 * @y: an int for the power
 * Return: the power of x to y
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	y--;
	return (x * _pow(x, y));
}

/**
 * _pow_recursion - returns pow of given number
 * @x: a number to rise
 * @y: an int for the power
 * Return: the power of x to y
 */
int _pow_recursion(int x, int y)
{
	int f;

	if (y < 0)
		return (-1);
	f = _pow(x, y);

	return (f);
}
