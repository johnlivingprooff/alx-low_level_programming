#include "variadic_functions.h"

/**
 * print_numbers - function prints num, followed by newline
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	int a;
	va_list numbers; /* list of nos to print */



	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{

		if (separator == NULL)
			return;

		a = va_arg(numbers, int);
		printf("%d", a);

		if (i < n - 1)
			printf("%s", separator);
	}

	va_end(numbers);
	putchar(10);
}
