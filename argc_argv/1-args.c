#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints its name'
 * @argc: argument size
 * @argv: argument array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[1] != NULL)
		printf("%d\n", argc - 1);
	else
		printf("0\n");
	return (0);
}
