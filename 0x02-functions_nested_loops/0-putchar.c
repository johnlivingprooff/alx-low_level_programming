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

	other(result);
	printf("%s\n", result);

	return (0);

}

void other(char out[]) /* _putchar Function definition */
{
	char s[] = "_putchar";
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		out[i] = s[i];
	}
	out[i] = '\0';
}
