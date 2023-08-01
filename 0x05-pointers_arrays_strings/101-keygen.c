#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

#define PASS 100

/**
* main - program that generates random
* valid passwords for the program 101-crackme.
*
* Return: Always (0)
*/
int main(void)
{
	int pass[PASS];
	int i, a, x;

	srand(time(NULL));

	for (i = 0; i < PASS; i++)
	{
		pass[i] = rand() % 78;
		a += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((2772 - a) - '0' < 78)
		{
			x = 2772 - a - '0';
			a += x;
			putchar(n + '0');
			break;
		}
	}
	
	return (0);
}
