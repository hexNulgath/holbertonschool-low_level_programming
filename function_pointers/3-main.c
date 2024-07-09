#include "function_pointers.h"
/**
 * main - does basic operations
 * @argc: argument size
 * @argv: argument array
 * Return: Always return 0 on success
 */
int main(int argc, char *argv[])
{
	int number1 = int atoi(argv[argc - 3]);
	char operator = argv[argc - 2]
	int number2 = int atoi(argv[argc - 1]);
	int result;

	if (argc < 4)
	{
		printf(Error\n);
		exit(98);
	}
	if (operator != '+' && operator != '-' && operator != '/' && operator != '*' && operator != '%')
        {
                printf(Error\n);
                exit(99);
        }
	if ((operator == '%' || operator != '/') && number2 == 0)
	{
		printf(Error\n);
		exit(100);
	}
	result = get_op_func(operator)(number1, number2);
	printf("%i\n",result);
	return ('0');
}
