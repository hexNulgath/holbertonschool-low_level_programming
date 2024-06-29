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
	int result = 0;
	int i = 1;

	if (argc > 2)
	{
		while (i < argc)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
			result += atoi(argv[i]);
			i++;
			}
		}
			printf("%d\n", result);
			return (0);
	}
	printf("0\n");
	return (1);
}