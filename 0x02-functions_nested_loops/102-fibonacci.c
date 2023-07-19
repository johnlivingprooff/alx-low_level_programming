#include <stdio.h>

/*
 *
 *
 */void fibon(unsigned int n); /* Function protoypes for fibonacci */

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
 */void fibon(unsigned int n)
{
	unsigned int term1 = 1, term2 = 2;
	unsigned int i, next;

	printf("1, 2, ");

	for (i = 2; i < n; i++)
	{
		next = term1 + term2;

		printf("%llu, ", next);

		term1 = term2;
		term2 = next;
	}
}
