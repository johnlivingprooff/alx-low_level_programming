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
	int term1 = 1, term2 = 2;
	int i, next;

	printf("1, 2, ");

	for (i = 2; i < n; i++)
	{
		next = term1 + term2;

		printf("%d, ", next);

		term1 = term2;
		term2 = next;
	}
}
