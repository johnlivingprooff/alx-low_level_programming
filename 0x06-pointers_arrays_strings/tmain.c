#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char dt[98];
    char sc[8];

	printf("Enter First string: ");
	scanf("%s", dt);

	printf("Enter Second sring: ");
	scanf("%s", sc);

	printf("%d\n", _strcmp(dt, sc));

    return (0);
}
