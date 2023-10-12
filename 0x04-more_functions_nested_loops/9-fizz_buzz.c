#include "main.h"

/**
 * main - print numbers 1 - 100
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("Buzz");
	printf("\n");

	return (0);
}
