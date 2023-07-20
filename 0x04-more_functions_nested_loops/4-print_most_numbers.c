#include "main.h"

/**
* print_most_numbers - prints 0 - 9,
* omits 2 & 4, followed by a new line.
* @void
* Return: no return
*/
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != '2' && n != '4')
			_putchar(n);
	}
	_putchar(10);
}
