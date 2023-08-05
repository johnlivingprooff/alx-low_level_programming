#include "main.h"

/**
* positive_int - Function checks it a string
* is a positive integer
* @n: string to check
* Return: 0 - positive, 1 - not
*/
int positive_int(char *n)
{
	if (*n == '\0')
		return (0);

	for (; *n != '\0'; n++)
	{
		if (*n < 48 || *n > 57)
			return (0);
	}

	return (1);
}

/**
* main - program that adds positive numbers.
* @argc: number of arguments (agr count)
* @argv: array of arguments (arg vector)
* Return: 0 - success
*/
int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (positive_int(argv[i]))
			res += _atoi(argv[i]);
		else
		{
			printf("Error\n");

			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}

/**
* _atoi - Function converts a string to an integer
* @s: converts the string
* Return: void
*/
int _atoi(char *s)
{
	int i, sign = 1; /* i represents the element number of the *s array: */
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
			sign *= -1; /* sign = sign * -1 */
		else if (s[i] >= 48 && s[i] <= 57) /* 0 <= x >=9 i.e x is between 0 - 9 */
		{
			n = 10 * n + (s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
	}
return (n * sign);
}
