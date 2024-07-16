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
	int i;
	char temp = 'c';
	char *p = char (malloc(size * sizeof(char));

	for (i = 0; i < size; i++, 'c'++)
	{
		temp = temp + i;
		p[i] = temp;
	}

	if (p[i] == 0)
	{
	return (NULL);
	}
	else
	{
	rturn (*p);
}
