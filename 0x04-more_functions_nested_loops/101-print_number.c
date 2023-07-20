#include "main.h"

/**
* print_number - Entry point
* @n: prints integers
* Return:
*/
void print_number(int n)
{
	int count = 0, digit, i, tmp, an;
	int div = 1, nn;

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
	nn = n;
	if (n < 0)
	{
		_putchar('-');
		nn = -nn;
	}
	/* what is Div? */
	for (i = 1; i < count; i++)
	{
		div *= 10;
	}
	/* extracts & prints each digit */
	an = n;
	for (i = count; i >= 1; i--)
	{
		digit = an / div;
		_putchar(digit + '0');
		an = an % div; /* removes left digit */
		div /= 10;
	}
}
