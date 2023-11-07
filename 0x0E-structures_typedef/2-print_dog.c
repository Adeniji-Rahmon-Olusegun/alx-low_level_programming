#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the value of members of struct
 *
 * @d: pointer to struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %f\n", 0.0);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
