#include <stdio.h>

/*
 *
 *
 */void fibon(unsigned long int n); /* Function protoypes for fibonacci */

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
 */void fibon(unsigned long int n)
{
	unsigned long int term1 = 1, term2 = 2;
	unsigned long int i, next;

	printf("1, 2, ");

	for (i = 2; i < n; i++)
	{
		next = term1 + term2;

		printf("%lu, ", next);

		term1 = term2;
		term2 = next;
	}
}
