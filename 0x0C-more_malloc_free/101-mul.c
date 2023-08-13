#include "main.h"

/**
* isnum - checks if a string is a number
* @num: string to be checked
* Return: 1 - is a number, 0 - is not
*/
int isnum(char *num)
{
	size_t i;

	/* checks if number is negative */
	i = (num[0] == '-') ? 1 : 0;

	for (; num[i] != '\0'; i++)
	{
		if (num[i] < 48 || num[i] > 57)
			return (0);
	}
	return (1);
}

/**
* sc - converts a char digit to an integer
* @n: char reps a digit
* Return: equivalent integer
*/
int sc(char n)
{
	return (n - '0');
}

/**
* multiply - multiplies each char in string from right to left
* @c1: a string that contains integers
* @c2: a string that contains integers
* Return: product of two strings
*/
char *multiply(char *c1, char *c2)
{
	int i, j, l, m, prod, carry, len1, len2, t_len;
	char *result;

	if (!isnum(c1) || !isnum(c2))
		return (NULL);

	len1 = strlen(c1);
	len2 = strlen(c2);
	t_len = len1 + len2;

	result = malloc(t_len + 1);
	if (!result)
		return (NULL);
	for (i = 0; i < t_len; i++)
		result[i] = '0';
	result[t_len] = '\0';
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = sc(c1[i]) * sc(c2[j]) + sc(result[i + j + 1]) + carry;
			carry = prod / 10;
			result[i + j + 1] = (prod % 10) + 48;
		}
		result[i + j + 1] = (sc(result[i + j + 1]) + carry) + 48;
	}

	for (l = 0; result[l] == '0' && l < t_len - 1; l++)
		;

	if (l > 0)
	{
		for (m = 0; l + m < t_len; m++)
			result[m] = result[l + m];
		result[m] = '\0';
	}

	return (result);
}

/**
* main - program that multiplies two positive numbers.
* @argc: argument count
* @argv: argument vectors
* Return: 0 - Success
*/
int main(int argc, char **argv)
{
	char *mul, *num1, *num2;

	if (argc != 3 || (!isnum(argv[1]) || !isnum(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	mul = multiply(num1, num2);
	printf("%s\n", mul);

	free(mul);

	return (0);
}
