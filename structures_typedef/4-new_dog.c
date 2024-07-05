#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return(NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	strcpy(dog->name, name);
    strcpy(dog->owner, owner);

	return (dog);
}
