#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i;
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	return (1);
}
