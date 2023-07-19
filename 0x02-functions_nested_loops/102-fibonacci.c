#include <stdio.h>

/*
 *
 *
 */void fibon(int n); /* Function protoypes for fibonacci */

/*
 *
 *Main Entry point; retrns 0
 *
 */int main(void)
{
	int numbers = 50;

	fibon(numbers);

	return (0);
}

/*
 *
 * Function Definition here
 *
 */void fibon(int n)
{
	unsigned long long term1 = 1, term2 = 2;
	unsigned long long i, next;

	printf("1, 2, ");

	for (i = 2; i < n; i++)
	{
		next = term1 + term2;

		printf("%llu, ", next);

		term1 = term2;
		term2 = next;
	}
}
