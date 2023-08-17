#include "variadic_functions.h"

/**
 * sum_them_all - functionsthat returns the sum of all its parameters
 * @n: number of parameters
 * @...: the rest of the function args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ellipsis;
	size_t i;
	int sum, a;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(ellipsis, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(ellipsis, int);
		sum += a;
	}

	va_end(ellipsis);
	return (sum);
}
