#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->age == NULL)
		{
			d->age = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		if (d->name == NULL)
		{
			d->name = "Name: (nil)";
		}
	}
}
