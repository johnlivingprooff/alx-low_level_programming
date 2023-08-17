#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by \n
 * @separator: separates the strings
 * @n: number of strings passed
 * Does not return any value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i = 0;
	char *str;
	va_list strings;

	va_start(strings, n);

	if (separator == NULL)
	{
		va_end(strings);
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}

	va_end(strings);
	putchar(10);
}
