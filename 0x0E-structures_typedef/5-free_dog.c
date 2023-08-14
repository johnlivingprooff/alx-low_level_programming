#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - let them run wild
 * @d: pointer to structure
 * Return: freed dogs :D (nothing's returned, it's a void function)
 */
void free_dog(dog_t *d)
{
	free(d);
}
