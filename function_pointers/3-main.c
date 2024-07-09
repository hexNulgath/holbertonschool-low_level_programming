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
	int number2 = int atoi(argv[argc - 1]);

	if (argc < 4 || argv[argc - 2] != '+' && argv[argc - 2] != '-' && argv[argc - 2] != '/' && argv[argc - 2] != '*')
	{
		printf(Error\n);
		exit(98);
	}

}
