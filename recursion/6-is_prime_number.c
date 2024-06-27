#include "main.h"
/**
 * _prime - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: a number to check
 * @y: number of iteration
 * Return: return 1 if prime 0 otherwise
 */
int _prime(int n, int y)
{
	if (y == n)
		return (1);
	if (n % y == 0)
                return (0);
	return (_prime(n, y + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: a number to check
 * Return: return 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	int y = 2;
	int f;

	if (n < 0 || n == 1)
		return (0);
	if (n == 2)
		return (1);
	f = _prime(n, y);

	return (f);
}
