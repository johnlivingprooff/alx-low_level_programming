#include "main.h"

/**
* print_triangle - prints a triangle,
* followed by a new line.
* @size: prints with '#'
* Return: null
*/
void print_triangle(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
		for (n = 1; n <= size; n++)
		{
			if (n <= size - 1)
				_putchar(' ');

			else
				_putchar('#');
		}

		_putchar(10);
		}
	}
	else
		_putchar(10);
}
