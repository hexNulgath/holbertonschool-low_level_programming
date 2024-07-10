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
	int ivalue;
	char cvalue;
	char *svalue;
	float fvalue;
	va_list args;

	va_start(args, format);
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
				ivalue = va_arg(args, int);
				printf("%i", ivalue);
				j++;
				break;
			case 'c':
				cvalue = va_arg(args, char);
				printf("%c", cvalue);
				j++;
				break;
			case 'f':
				fvalue = va_arg(args, float);
				printf("%f", fvalue);
				j++;
				break;
			case 's':
				svalue = va_arg(args, *char);
				printf("%s", svalue);
				j++;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
