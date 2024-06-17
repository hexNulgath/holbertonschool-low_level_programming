#include "main.h"
#include "stdio.h"
/**
 * main - prints a word 99 times
 * Return: void
 */

int main(void)
{
	int fizz = 1;

	while (fizz < 101)
	{
		if (fizz % 3 == 0 && fizz % 5 == 0)
		{ 
			printf("FizzBuzz ");
		} else if (fizz % 3 == 0) {
			printf("Fizz ");
		} else if (fizz % 5 == 0) {
			printf("Buzz ");
		} else {
			printf("%d ",fizz);
		}
		fizz++;
	}
	return (0);
}
