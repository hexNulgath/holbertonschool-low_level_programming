#include "main.h"
/**
 * fact - returns factorial of given number
 * @n: a number to factorize
 * Return: factorial of n
 */
int fact(int n)
{
	if (n == 0)
		return (1);
	return (n * fact(n - 1));
}

/**
 * factorial - returns factorial of given number
 * @n: a number to factorize
 * Return: factorial of n
 */
int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	f = fact(n);

	return (f);
}
