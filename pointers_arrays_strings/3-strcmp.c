#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a string
 * @s2: another string
 * Return: an int
 */

int _strcmp(char *s1, char *s2)
{
	int z = 0;
	int i = 0;
	int res = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	 while (s2[z] != '\0')
        {
                z++;
        }
	if (z < i)
		res = 15;
	else if (i > z)
		res = -15;
	else
		res = 0


	return (res);
}
