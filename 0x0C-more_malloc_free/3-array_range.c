#include "main.h"

/**
* array_range - function that creates an array of integers.
* @min: minimum value in array
* @max: max value in array
* Return: array of numbers
*/
int *array_range(int min, int max)
{
	int n, size;
	int *num_array;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	num_array = malloc(sizeof(int) * size);

	if (num_array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		num_array[n] = min++;

	return (num_array);
}
