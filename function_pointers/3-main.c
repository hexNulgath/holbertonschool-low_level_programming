#include "3-calc.h"
/**
 * main - does basic operations
 * @argc: argument size
 * @argv: argument array
 * Return: Always return 0 on success
 */
int main(int argc, char *argv[])
{
	int number1 = atoi(argv[argc - 3]);
	char *operator = argv[argc - 2];
	int number2 = atoi(argv[argc - 1]);
	int result;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(operator) == NULL)
        {
                printf("Error\n");
                exit(99);
        }
	if ((*operator == '%' || *operator == '/') && number2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator)(number1, number2);
	printf("%i\n",result);
	return ('0');
}
