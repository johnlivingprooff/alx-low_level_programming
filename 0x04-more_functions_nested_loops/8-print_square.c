#include "main.h"

/**
* print_square - prints a square
* @size: prints with '#'
* Return: nothing
*/
void print_square(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
		_putchar(10);
		}
	}
	else
		_putchar(10);
}
