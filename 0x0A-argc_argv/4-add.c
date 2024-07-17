#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: count
 * @argv: vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (atoi(argv[i]) > 0)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc = 1)
	{
		printf("0\n");
	}
	else if (atoi(argv[i]) < 0 || atoi(argv[i]) > 9)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}	
