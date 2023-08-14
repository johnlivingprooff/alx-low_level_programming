#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: Dog's name
 * @age: it's age
 * @owner: its owner
 * Return: returns new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog = (dog_t *)malloc(sizeof(dog_t));

	if (nDog == NULL)
		return (NULL);

	nDog->name = malloc(strlen(name) + 1);
	nDog->owner = malloc(strlen(owner) + 1);
	if (!nDog->name || !nDog->owner)
	{
		free(nDog->name);
		free(nDog->owner);
		free(nDog);
		return (NULL);
	}

	strcpy(nDog->name, name);
	nDog->age = age;
	strcpy(nDog->owner, owner);

	return (nDog);
}
