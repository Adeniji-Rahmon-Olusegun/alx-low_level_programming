#ifndef F_STRUCT_H
#define F_STRUCT_H

/**
 * struct dog - creates a template for object dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * This struct creates a template for dog object
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif
