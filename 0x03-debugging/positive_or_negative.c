#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 *main - Entry point
 *
 * Retuns (0)
 *
 */void positive_or_negative(long int n)
{
	/* your code goes there */
	if (n > 0)
	{
		printf("%li is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%li is zero\n", n);
	}
	else
	{
		printf("%li is negative\n", n);
	}
	return;
}
