#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog object
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *ptr_dog;
	int name_len = 0, owner_len = 0;

	for (i = 0; name[i] != '\0'; i++)
		name_len++;
	for (j = 0; owner[j] != '\0'; j++)
		owner_len++;

	ptr_dog = (dog_t *)malloc(sizeof(dog_t));

	if (ptr_dog == NULL)
		return (NULL);

	ptr_dog->name = (char *)malloc(sizeof(char) * (name_len + 1));
	ptr_dog->owner = (char *)malloc(sizeof(char) * (owner_len + 1));
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		ptr_dog->name[j] = name[i];
	ptr_dog->name[i] = '\0';

	ptr_dog->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		ptr_dog->owner[j] = owner[j];
	ptr_dog->owner[j] = '\0';

	return (ptr_dog);
}
