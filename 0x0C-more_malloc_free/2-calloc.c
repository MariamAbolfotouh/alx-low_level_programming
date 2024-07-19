#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 *
 * @nmemb: array
 * @size: bytes
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	ptr = malloc(size * nmemb);

	if (ptr == NULL || size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
