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
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	i = min;
	while (i <= max)
	{
		i++;
	}
	ptr = malloc(i * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; min <= max; j++, min++)
	{
		ptr[j] = min;
	}
	return (ptr);

}
