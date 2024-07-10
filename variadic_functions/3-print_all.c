#include "variadic_functions.h"
/**
 * print_all - print any number of params
 * @format: the type of the params
 */
void print_all(const char * const format, ...)
{
	char formaters[4] = {'\0'};
	int i = 0;
	int j = 0;
	va_list args;

	va_start(args, n);
	while (format[i] != '\0')
	{
		switch (format[i]) {
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
	i = 0;
	j = 0;
	while (formaters[i] != '\0')
	{
		switch (formaters[i]){
			case 'i':
				printf("%i", va_arg(args, int));
				j++;
				break;
			case 'c':
				printf("%c", va_arg(args, char));
				j++;
				break;
			case 'f':
				printf("%f", va_arg(args, float));
				j++;
				break;
			case 's':
				printf("%s", va_arg(args, char*));
				j++;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
