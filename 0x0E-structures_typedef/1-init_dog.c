#include "dog.h"
#include <stdlib.h>
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
	int len_name = 0, len_owner = 0;

	for (i = 0; name[i] != '\0'; i++)
	{
		len_name++;
	}

	for (j = 0; owner[j] != '\0'; j++)
	{
		len_owner++;
	}

	d->name = (char *)malloc(sizeof(char) * (len_name + 1));
	d->owner = (char *)malloc(sizeof(char) * (len_owner + 1));
	d->age = (float *)malloc(sizeof(float) * 1);

	if (d->name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			d->name[i] = name[i];
		}

		d->name[i] = '\0';
	}

	if (d->age != NULL)
		d->age = age;

	if (d->owner != NULL)
	{
		for (j = 0; owner[j] != '\0'; j++)
		{
			d->owner[j] = owner[j];
		}

		d->owner[j] = '\0';
	}
	free(d->name);
	free(d->owner);
	free(d->age);
}
