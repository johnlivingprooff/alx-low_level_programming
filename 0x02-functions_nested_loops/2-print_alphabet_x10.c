#include "main.h"

/*
 * function that prints 10 times the alphabet
 * in lowercase, followed by a new line.
 *
 */void print_alphabet_x10(void)
{
	int i;
	char l;
	
	for (i = 0; i < 10; i++)
	{
		for (l = 97; l != 123; l++)
		{
			_putchar(l);
		}
		_putchar(10);
	}
}
