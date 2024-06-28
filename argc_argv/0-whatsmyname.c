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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
