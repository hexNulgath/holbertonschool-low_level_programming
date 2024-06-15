#include "main.h"
/**
 * _isalpha - checks alphabetic characters
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c > 96 && c < 122 )
		return (1);
	else if (c > 64 && c < 90)
		return (1);
	else
		return (0);
}
