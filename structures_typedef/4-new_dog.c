#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - total of characters in string
 * @s: a string pointer
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
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
	dog->name = malloc(_strlen(name) + 1);
	dog->age = age;
	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
    strcpy(dog->owner, owner);

	return (dog);
}
