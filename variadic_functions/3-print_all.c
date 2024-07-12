#include "variadic_functions.h"
char *formater(const char *format, char *array)
{
	static char formaters[5] = {'\0'};
	int i = 0;
	int j = 0;

	while (format[i] != '\0' && j < 4)
	{
		switch (format[i])
		{
			case 'i':
			case 'c':
			case 'f':
			case 's':
				formaters[j] = format[i];
				j++;
				break;
		}
		i++;
	}
	array = formaters;
	return (array);
}

/**
 * print_all - print any number of params
 * @format: the type of the params
 */
void print_all(const char * const format, ...)
{
	char formaters[5] = {'\0'};
	int i = 0;
	va_list args;

	va_start(args, format);
	formater(format, formaters);
	while (formaters[i] != '\0')
	{
		switch (formaters[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'f':
				printf("%.5f", va_arg(args, float));
				break;
			case 's':
				if (va_arg(args, char*) == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(args, char*));
				break;
		}
		i++;
		if (formaters[i] != '\0') 
		{
            		printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
