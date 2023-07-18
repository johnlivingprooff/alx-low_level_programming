#include "main.h"

/*
 * Function that prints lowercase alphabets
 *
 */void print_alphabet(void)
{
	char l;

	for (l = 97; l <= 122; l++)
	{
		_putchar(l);
	}
	_putchar(10);
}
