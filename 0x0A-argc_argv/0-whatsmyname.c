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
	if (argc < 1)
	{
		return (1);
	}
	else
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
