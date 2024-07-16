#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: initialized char
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	{
		return (p);
	}
}
