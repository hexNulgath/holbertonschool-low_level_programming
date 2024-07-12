#include "variadic_functions.h"
void formater(const char *format, char *array)
{
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
				array[j] = format[i];
				j++;
				break;
		}
		i++;
	}
	array[j] = '\0';
}

/**
 * print_all - print any number of params
 * @format: the type of the params
 */
void print_all(const char * const format, ...)
{
	char formaters[5] = {'\0'};
	int i = 0;
	char *str;
	va_list args;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	formater(format, formaters);
	while (formaters[i] != '\0' && format != NULL)
	{
		switch (formaters[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c, ", (char) va_arg(args, int));
				break;
			case 'f':
				printf("%.6f, ", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil), ");
					break;
				}
				printf("%s, ", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
