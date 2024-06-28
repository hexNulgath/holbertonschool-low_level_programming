#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Prints all arguments
 * @argc: argument size
 * @argv: argument array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result;
	int a = atoi(argv[argc - 2]);
	int b = atoi(argv[argc - 1]);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = a * b;
		printf("%i\n", result);
		return (0);
	}
}
