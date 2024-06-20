#include "main.h"
/**
 * swap_int - swap two int values
 * @a: an int pointer
 * @b: an int pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a  = *b;
	*b = x;
}
