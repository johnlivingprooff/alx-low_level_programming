#include <stdio.h>

/*
 *
 *
 */unsigned long int fibon(unsigned long int sum); /* Function protoypes for fibonacci */

/*
 *
 *Main Entry point; retrns 0
 *
 */int main(void)
{
	unsigned long int numbers;
	numbers = fibon(numbers);

	printf("%lu\n", numbers);

	return (0);
}

/*
 *
 * Function Definition here
 *
 */unsigned long int fibon(unsigned long int sum)
{
	unsigned long int t1 = 1, t2 = 2;
	sum = t2;

	while (t1 + t2 <= 4000000)
	{
	t2 += t1;
	if (t2 % 2 == 0)
	sum = sum + t2;
	t1 = t2 - t1;
	}
	return (sum);
}
