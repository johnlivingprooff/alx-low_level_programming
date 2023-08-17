#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by \n
 * @separator: 
 * @n: 
 * Does not return any value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *str;
	va_list strings;

	va_start(strings, str);

	if (separator == NULL)
		return;
}
