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
 */void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return;
}
