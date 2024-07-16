#include "main.h"
#include <stdlib.h>

/**
 * *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: of array
 * @height: of array
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	p = malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0 || p == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = calloc(width, sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
