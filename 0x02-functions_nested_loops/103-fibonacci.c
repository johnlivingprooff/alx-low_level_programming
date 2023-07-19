#include <stdio.h>
#define MAX_VALUE 4000000

/*
 *
 *
 */unsigned long int fibon(unsigned long int n); /* Function protoypes for fibonacci */

/*
 *
 *Main Entry point; retrns 0
 *
 */int main(void)
{
	unsigned long int numbers;

	printf("%lu", fibon(numbers));

	return (0);
}

/*
 *
 * Function Definition here
 *
 */unsigned long int fibon(unsigned long int n)
{
	unsigned long int t1 = 1, t2 = 2;
	unsigned long int i, next = t1 + t2, sum;

	while (next <= 4000000)
	{
	next = next + t2;
	if (next % 2 == 0)
	sum = sum + next;
	t1 = next - t1;
	}
	printf("\n");
}
