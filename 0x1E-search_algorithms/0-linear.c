#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: no. of elements in the array
 * @value: value to be found
 * Return: Index of value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
