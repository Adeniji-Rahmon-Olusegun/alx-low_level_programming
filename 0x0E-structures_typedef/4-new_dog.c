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

dog_t *new_dog(char name, float age, char owner)
{
	int i, j;
	dog_t *new_dog;
	int name_len = 0, owner_len = 0;

	for (i = 0; name[i] != '\0'; i++)
		name_len++;

	for (j = 0; owner[j] != '\0'; j++)
		owner_len++;

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = (char *)malloc(sizeof(char) * (name_len + 1));
	new_dog->owner = (char*)malloc(sizeof(char) * (owner_len + 1));

	if (new_dog->name == NULL)
		return (NULL);
	if (new_dog->owner == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		new_dog->name = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		new_dog->owner = owner[j];
	new_dog->owner[j] = '\0';

	return (new_dog);
}
