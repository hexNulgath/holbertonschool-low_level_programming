#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all arguments
 * @argc: argument size
 * @argv: argument array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = (*argv[argc - 2] - '0') * (*argv[argc - 1] - '0');

	printf("%d\n", result);
	return (0);
}
