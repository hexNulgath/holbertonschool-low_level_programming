#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: charcter to check if upper
 * Return: returns 1 if upper 0 otherwise (Success)
 */
int _isupper(int c)
{
	if (c < '['  && c > '@')
		return (1);
	else
		return (0);
}
