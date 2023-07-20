#include "main.h"

/**
* more_numbers - prints more numbers
* @void
* Return: no
*/
void more_numbers(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');

			_putchar(a % 10 + '0');
		}
		_putchar(10);
	}
}
