#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 *
 * @array: pointer
 * @size: size of the array
 * @action: pointer to function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size != 0 && array != NULL && action != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
