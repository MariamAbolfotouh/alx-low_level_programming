#include "main.h"

/**
 * *array_range - creates an array of integers.
 *
 * @min: min value
 * @max: max value
 *
 * Return:  pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);

}
