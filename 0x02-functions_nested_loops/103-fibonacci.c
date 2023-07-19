#include <stdio.h>

/*
 *
 *
 */unsigned long int fibon(unsigned long int sum);

/*
 *
 *Main Entry point; retrns 0
 *
 */int main(void)
{
	unsigned long int numbers, n = 0;

	numbers = fibon(n);

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
