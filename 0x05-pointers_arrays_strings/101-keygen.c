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
	const char typeset[62];
	int a, i, x;
	int password[10];


	srand(time(0));
	printf("%s", typeset);

	for (i = 0; i < 11; i++)
	{
		x = rand() % (sizeof(typeset));
		password[i] = typeset[x];
	}

	printf("%ls\n", password);
	
	return (0);
}
