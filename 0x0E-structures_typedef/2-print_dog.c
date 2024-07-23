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
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");

		}
		if else
		{
			printf("Name: %s\n", d->name);
		}

		if (d->age == NULL)
		{
			printf("(nil)\n");
		}
		if else
		{
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		if else
		{
			printf("Owner: %s\n"; d->owner);
		}
	}
}
