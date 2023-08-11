#include "main.h"
#define INVALID INT_MIN

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
		/* Handles the '-' sign */
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= 48 && s[i] <= 57) /* 0 <= x >=9 i.e x is between 0 - 9 */
		{
			n = 10 * n + (s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
		else
			return (INVALID);
	}
	return (n * sign);
}

/**
* main - program that multiplies two positive numbers.
* @argc: argument count
* @argv: argument vectors
* Return: 0 - Success
*/
int main(int argc, char **argv)
{
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	/*printf("num1: %d, num2: %d\n", num1, num2);*/
	if (num1 == INVALID || num2 == INVALID)
	{
		printf("Error\n");
		exit(98);
	}

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
