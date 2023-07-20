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
		i = 0;
		while (i <= n)
		{
			i++;
			_putchar(95);
		}

		_putchar(10); 
	}
	else if (n <= 0)
		_putchar(10);
}
