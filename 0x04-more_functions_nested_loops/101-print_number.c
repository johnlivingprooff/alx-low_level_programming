#include "main.h"

/**
* print_number - Entry point
* @n: prints integers
* Return:
*/
void print_number(int n)
{
	int count = 0, digit, i, tmp;
	int div = 1;

	/* handles output when n is 0 */
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	/* to count the digits in 'n' */
	tmp = n;
	while (tmp != 0)
	{
		tmp /= 10;
		count++;
	}

	/* for negative n */
	if (n < 0)
	{
		_putchar('-');
		tmp = -tmp;
	}

	/* what is Div? */
	for (i = 1; i < count; i++)
	{
		div *= 10;
	}

	/* extracts & prints each digit */
	for (i = count; i >= 1; i--)
	{
		digit = tmp / div;
		_putchar(digit + '0');
		tmp = tmp % div; /* removes left digit */
		div /= 10;
	}
}
