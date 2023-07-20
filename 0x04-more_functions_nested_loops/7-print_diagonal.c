#include "main.h"

/**
* print_diagonal- draws a straight line in the terminal.
* @n: prints diagonal
* Return: nnthing returned
*/
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar(92);
			_putchar(10);
			i++;
		}

		_putchar(10);
	}
	else if (n <= 0)
		_putchar(10);
}
