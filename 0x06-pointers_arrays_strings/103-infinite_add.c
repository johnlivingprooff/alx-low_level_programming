#include "main.h"

/**
* int_to_char - Function that converts an int to a string
* @n: integer to be converted
* @str: converted int
*/
void int_to_char(int n, char *str)
{
	int tmp = n, l = 0, i;

	if (n < 0)
	{
		n = -n;
		str[0] = '-';
		l = 1;
	}

	for (; tmp != 0; l++) /* Counts the digits in the int */
		tmp /= 10; /* l keeps track of no of digits */

	for (i = l - 1; i >= 0; i--)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
	}
	str[l] = '\0';
}
/**
* infinite_add - Function adds two numbers
* @n1: Number one
* @n2: Number two
* @r: storage buffer
* @size_r: buffer size
* Return: char *
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int result, r1 = 0, r2 = 0;
	int i, l1 = 0, l2 = 0, l_sum;

	for (; n1[l1]; l1++)
		;
	for (; n2[l2]; l2++)
		;
	if (l1 >= size_r || l2 >= size_r)
		return (NULL);

	/* Converts string n1 & n2 to integer */
	for (i = 0; i < l1; i++)
		r1 = 10 * r1 + (n1[i] - '0');
	for (i = 0; i < l2; i++)
		r2 = 10 * r2 + (n2[i] - '0');

	/* Adds up value of n1&n2 and converts back to string */
	result = r1 + r2;
	int_to_char(result, r);

	l_sum = (result == 0) ? 1 : 0;
	for (; result != 0; l_sum++)
		result /= 10;

	if (l_sum >= size_r)
		return (NULL);

	return (r);
}
