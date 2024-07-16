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
	unsigned int i;
	char *p = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	if (size == 0)
	{
		return (NULL);
	}
	else if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
