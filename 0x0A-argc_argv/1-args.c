#include <stdio.h>
#include <stdlib.h>

/**
 * main _ Entry point
 *
 * @argc: count
 * @argv: vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
