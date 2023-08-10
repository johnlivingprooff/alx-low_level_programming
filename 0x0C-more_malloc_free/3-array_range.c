#include "main.h"

/**
* array_range - function that creates an array of integers.
* @min: minimum value in array
* @max: max value in array
* Return: array of numbers
*/
int *array_range(int min, int max)
{
	int n;
	int *num_array;

	if (min > max)
		return (NULL);

	num_array = malloc(sizeof(int) * (max - min + 1));
	if (num_array == NULL)
		return (NULL);

	for (n = 0; n < (max - min + 1); n++)
		num_array[n] = min++;

	return (num_array);
}
