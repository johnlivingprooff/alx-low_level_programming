#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: no. of elements in the array
 * @value: value to be found
 * Return: Index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t) sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += (size_t) sqrt(size);

		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (prev < size && array[prev] == value)
		return (prev);

	return (-1);
}
