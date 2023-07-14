#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 *main is Entry Point
 *
 *return value is 0
 *
 */int main(void)
{
	int n;
	int lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastN = n % 10;

	if (lastN > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastN);
	}
	else if (lastN == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastN);
	}
	else if (lastN < 6 && lastN != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastN);
	}
	return (0);
}
