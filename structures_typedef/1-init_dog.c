#include "main.h"
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a structure
 * @d: name of the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct Dog d;

	d = malloc(sizeof(struct Dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
