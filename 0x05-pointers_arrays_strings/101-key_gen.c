#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that generates random valid
* passwords for the program 101-crackme.
*
* Return: Always 0.
*/
int main(void)
{
	const char typeset[] = "abcd";
	int a, i, x;
	int password[10];


	srand(time(0));
	for (a = 48; a < 123; a++)
	printf("%c", typeset[a]);

	for (i = 0; i < 11; i++)
	{
		x = rand() % (sizeof(typeset));
		password[i] = typeset[x];
		printf("%c\n", password[i]);
	}
	
	return (0);
}
