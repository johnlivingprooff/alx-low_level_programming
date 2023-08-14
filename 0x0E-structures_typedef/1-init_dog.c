#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: tag name
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
