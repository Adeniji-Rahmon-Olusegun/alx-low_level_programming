#include "main.h"

/**
 * init_dog - initializes struct dog
 *
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}

	d->name[i] = '\0';

	d->age = age;

	for (j = 0; owner[j] != '\0'; j++)
	{
		d->owner[j] = owner[j];
	}

	d->owner[j] = '\0';
}
