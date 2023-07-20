#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n: draws the line
* Return: nnthing returned
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar(95);
			i++;
		}

		_putchar(10);
	}
	else if (n <= 0)
		_putchar(10);
}
