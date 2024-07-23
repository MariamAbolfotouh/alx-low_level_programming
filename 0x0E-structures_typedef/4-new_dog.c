#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gets a length of string
 *
 * @str: string
 *
 * Return: length of str
 */

int _strlen(const char *str)
{
	int i = 0;

	while (*str++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcopy - returns @dest with a copy of a string grom @src
 *
 * @src: source string
 * @dest: destination
 *
 * Return: dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Null
 */

dog_t *new_dog(char *name, float age, char *owner)
{


