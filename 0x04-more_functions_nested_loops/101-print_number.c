#include "main.h"

/**
* print_number - Entry point
* @n: prints integers
* Return:
*/
void print_number(int n)
{
	int count, digit, i;
	int div = 10;

	/* handles output when n is 0 */
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	/* to count the digits in 'n' */
	while (n != 0)
	{
		n /= 10;
		count++;
	}

	/* for negative n */
	if (n < 0)
		_putchar('-');

	/* extracts & prints each digit */
	for (i = count; i >= 0; i--)
	{
		digit = n / div;
		_putchar(digit + '0');
	}
}
