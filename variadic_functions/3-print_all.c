#include "variadic_functions.h"
/**
 * print_all - print any number of params
 * @format: the type of the params
 */
void print_all(const char * const format, ...)
{
	char formaters[4];
	int i = 0;
	int j = 0;

	while (format[i] != '\0')
	{
		switch (format) {
			case 'i':
				formaters[j] = 'i';
				j++;
				break;
			case 'c':
				formaters[j] = 'c';
				j++;
				break;
			case 'f':
				formaters[j] = 'f';
				j++;
				break;
			case 's':
				formaters[j] = 's';
				j++;
				break;	
		}
		i++;
	}
}
