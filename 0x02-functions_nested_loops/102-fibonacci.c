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
	int next;

	for (int i = 0; i < n; i++)
	{
		printf("%d, ");

		next = term1 + term2;
		term1 = term2;
		term2 = next;
	}
}
