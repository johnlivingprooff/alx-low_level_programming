#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
    char dt[98];
    char sc[8];
    char *ptr;

	printf("Enter Dest. string: ");
	scanf("%6s", dt);

	printf("Enter Source sring: ");
	scanf("%7s", sc);

	printf("Enter # of appendable Chars: ");
	scanf("%d", &n);

	ptr = _strncpy(dt, sc, n);
	printf("%s\n", ptr);

    return (0);
}
