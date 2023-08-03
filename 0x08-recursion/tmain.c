#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;
		char first[100], second[100];

		printf("Enter First string: ");
		scanf("%s", first);
		printf("Enter Second string: ");
		scanf("%s", second);
    r = wildcmp(first, second);
    printf("%d\n", r);
		return 0;
}
