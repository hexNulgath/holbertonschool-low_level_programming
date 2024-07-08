#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to prit
 * @f: function to print a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	print = f;
	print(nname);
}
