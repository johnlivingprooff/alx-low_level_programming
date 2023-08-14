#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");

	if (d->owner == NULL)
		printf("Owner: (nil)");

	printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");
	printf("Owner: %s\n", d->owner);
}
