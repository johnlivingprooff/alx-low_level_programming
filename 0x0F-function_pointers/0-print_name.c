#include "function_pointers.h"

/**
 * print_name - points to name printing functions
 * @name: string to be printed
 * @f: function pointer
 * does not return any value
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
		f(name);
	else
	{
	}
}
