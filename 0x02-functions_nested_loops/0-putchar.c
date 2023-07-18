#include "main.h"
#include <stdio.h>

/*
 *
 * main Function - Entry
 *
 * Description: program that prints _putchar
 * followed by a new line.
 *
 * returns 0
 */int main(void)
{
	char result[8];

	_putchar(result);
	printf("%s\n", result);

	return (0);

}

char _putchar(char out[]) /* _putchar Function definition */
{
	char s[] = "_putchar";
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		out[i] = s[i];
	}
	out[i] = '\0';

	printf("%s\n", out); /* prints out _putchar */

	return *out;
}
