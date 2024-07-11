#include "variadic_functions.h"
/**
 * print_all - print any number of params
 * @format: the type of the params
 */
void print_all(const char * const format, ...)
{
	char formaters[5] = {'\0'};
	int i = 0;
	int j = 0;
	char *svalue;
	va_list args;

	if (format == NULL)
	{
		printf("(nil)\n");
		return;
	}
	va_start(args, format);
	while (format[i] != '\0')
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
	i = 0;
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
				printf("%f", (double) va_arg(args, double));
				break;
			case 's':
				svalue = va_arg(args, char*);
				if (svalue == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", svalue);
				break;
		}
		i++;
		if (formaters[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
