#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[100];

	/* str = &collect; */
    scanf("%s", str);
	printf("%p\n", str);
    rev_string(str);
    return (0);
}
