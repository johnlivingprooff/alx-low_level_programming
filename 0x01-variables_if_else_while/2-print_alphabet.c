#include <stdio.h>
/*
 *main - Entry Point
 *
 *returns 0
 *
 */int main(void)
{
	char lowerCase[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		lowerCase[i] = 'a' + i;
		putchar(lowerCase[i]);
	}

		putchar('\n');

	return (0);
}
