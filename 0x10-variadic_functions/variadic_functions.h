#ifndef VARD_FUNC_C
#define VARD_FUNC_C

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/* printer structure */
typedef struct printer
{
	const char *specifier;
	void (*print)(va_list args);
} prints_format;

/* prototypes for this function */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARD_FUNC_C */
