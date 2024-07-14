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

int main(int argc, char *argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
	}

	return (0);
}
