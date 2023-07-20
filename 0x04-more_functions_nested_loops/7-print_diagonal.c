#include "main.h"

/**
* print_diagonal- draws a straight line in the terminal.
* @n: prints diagonal
* Return: nnthing returned
*/
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (s = 1; s <= n; s++)
		{
		for (i = 0; i < s; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
		}
	}
	else
		_putchar(10);
}
