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
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(fog);
		return (NULL);
	}
}


