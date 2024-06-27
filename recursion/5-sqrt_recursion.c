#include "main.h"
/**
 * _root - returns pow of given number
 * @n: a number to rise
 * @y: an int for the power
 * Return: the power of x to y
 */
int _root(int n, int y)
{
	if (y == n && n != 1)
		return (-1);
	if (y * y == n)
	{
		return (y);
	}
	else
	{
		y++;
		return (_root(n, y));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number to root
 * Return: return the root
 */
int _sqrt_recursion(int n)
{
	int y = 0;
	int f;

	if (n < 0)
		return (-1);
	f = _root(n, y);

	return (f);
}
