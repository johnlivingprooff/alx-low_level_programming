#include "main.h"
#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: prints putchar followed by a new line
 *
 * Returns: Always 0 (Success)
 */int main(void)
{
	char result[8];

	other(result);
	printf("%s\n", result);

	return (0);

}

/*
 * other Function Definition
 *
 */void other(char out[])
{
	char s[] = "_putchar";
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		out[i] = s[i];
	}
	out[i] = '\0';
}
