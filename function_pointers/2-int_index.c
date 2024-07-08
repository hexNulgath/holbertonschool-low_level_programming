#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the elements to use
 * @size: size of the array
 * @cmp: function to be used to compare values
 * Return: return index of first match or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*compare)(int) = cmp;
	int i;
	int result;

	if (size !> 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = compare(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
