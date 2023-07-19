#include <stdio.h>

void fibon(int n);
/*
 * main - Entry point
 *
 *
 */int main(void)
{
	int numbers = 50;

	fibon(numbers);

	return (0);
}
/*
 * Function creates a fibonacci sequence
 * the First 50
 *
 */void fibon(int n)
{
	int term1 = 1, term2 = 2;
	int i, next;

	printf("%d, %d, ", term1, term2);

	for (i = 0; i < n; i++)
	{
		next = term1 + term2;

		printf("%d, ", term1);

		term1 = term2;
		term2 = next;
	}
}
