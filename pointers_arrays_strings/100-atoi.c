#include "main.h"
/**
 * _atoi - converts a string to int
 * @s: a string
 * Return: returns a number or 0
 */

int _atoi(char *s)
{
	unsigned int res = 0;
	int response = 0;
	int sign = 1;
	int i = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '\0')
			return (0);
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}

	if (sign < 0 && res != 0)
		response = -res;
	else
		response = res;
	return (response);
}
