#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @n: size of array
 * @separator: separator between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	
	va_start(args, n);
	for (i = 0; i < n - 1 ; i++)
	{
		if (separator == NULL)
			printf("%i", va_arg(args, int));
		else
		printf("%i%s", va_arg(args, int), separator);
	}
	printf("%i\n", va_arg(args, int));
	va_end(args);
}
