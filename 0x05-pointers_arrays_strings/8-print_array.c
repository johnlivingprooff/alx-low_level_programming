#include "main.h"

/**
* print_array - prints out a string
* @a: points to the array's elements
* @n: number of array elements
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
