#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: the elements to use
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*iteration)(int) = action;
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		iteration(array[i]);
	}
}
