#include "main.h"
#include <stdio.h>

/**
* int_to_char - Function that converts an int to a string
* @n: integer to be converted
* @str: converted int
*
void int_to_char(int n, char *str)
{
	int tmp = n, l = 0, i;

	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return;
	}

	for (; tmp != 0; l++) // Counts the digits in the int 
		tmp /= 10; // l keeps track of no of digits 

	for (i = l - 1; i >= 0; i--)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
	}
	str[l] = '\0';
} */
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
	int l1 = 0, l2 = 0, max_l; /* l = length */
	int i, j, k, d1, d2, carry = 0, sum;

	for (; n1[l1]; l1++)
		;
	for (; n2[l2]; l2++)
		;

	max_l = (l1 > l2) ? l1 : l2;
	if (max_l >= size_r || max_l + 1 >= size_r)
		return (NULL);

	/* Addition: n1 + n2 = r */
	i = l1 - 1, j = l2 - 1, k = max_l;
	for (; i >= 0 || j >= 0 || carry != 0; i--, j--,k--)
	{
		d1 = (i >= 0) ? (n1[i] - '0') : 0;
		d2 = (j >= 0) ? (n2[j] - '0') : 0;

		/* Integer arithmetic is possible, and begins */
		sum = d1 + d2 + carry;
		carry = sum / 10; /* removes last digit, and stores the rest in sum */
		r[k] = '0' + (sum % 10); /* stores last digit in index k, as char */
	}

	/* handles excess carry from loop */
	if (carry != 0)
	{
		r[k] = '0' + carry;
		k--;
	}

	/* handles when 0 starts the string */
	if (r[0] == '0')
	{
		for (; max_l - k > 0; k++)
			r[0] = r[0 + k];
	}

	/* Adds '\0' at end of string */
	r[max_l - k] = '\0';

	/* printf("%d, %d", l1, l2); */
	return (r);
}
