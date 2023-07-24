#include "main.h"

/**
* print_number - Entry point
* @n: prints integers
* Return:
*/
void print_number(int n)
{
int count = 0, digit, i, tmp, an;
int div = 1;
int absolute_n = n < 0 ? -n : n;

/* to count the digits in 'n' */
tmp = absolute_n;
while (tmp != 0)
{
tmp /= 10;
count++;
}

/* for negative n */
if (n < 0)
{
_putchar('-');
}

/* what is Div? */
for (i = 1; i < count; i++)
{
div *= 10;
}

/* extracts & prints each digit */
an = absolute_n;
for (i = count; i >= 1; i--)
{
digit = an / div;
_putchar(digit + '0');
an = an % div; /* removes left digit */
div /= 10;
}
}

