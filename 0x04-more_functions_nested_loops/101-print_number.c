#include "main.h"

/**
* print_number - Entry point
* @n: prints integers
* Return:
*/
void print_number(int n)
{
	int count = 0, digit, i, temp;
	int div = 1;

	/* handles output when n is 0 */
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	/* to count the digits in 'n' */
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		count++;
	}

	/* for negative n */
	if (n < 0)
	{
		_putchar('-');
		temp = -temp;
	}

	/* what is Div? */
	for (i = 1; i < count; i++)
	{
		div *= 10;
	}

	/* extracts & prints each digit */
	for (i = count; i >= 1; i--)
	{
		digit = n / div;
		_putchar(digit + '0');
		n = n % div; /* removes left digit */
		div /= 10;
	}
}
