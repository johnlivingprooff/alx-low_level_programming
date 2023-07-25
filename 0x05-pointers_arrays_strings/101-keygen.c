#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define PWD_L 10

/**
* main - program that generates random valid
* passwords for the program 101-crackme.
*
* Return: Always 0.
*/
int main(void)
{
	const char typeset[95];
	unsigned int a, i, x;
	char password[PWD_L + 1];


	srand(time(0));
	for (a = 33; a <= 126; a++)
		putchar(typeset[a]);

	for (i = 0; i < PWD_L; i++)
	{
		x = rand() % (sizeof(typeset) - 1);
		password[i] = typeset[x];
	}
	password[PWD_L] = '\0';

	printf("%s\n", password);
	
	return (0);
}
