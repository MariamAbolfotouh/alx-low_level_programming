#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: name of struct
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
