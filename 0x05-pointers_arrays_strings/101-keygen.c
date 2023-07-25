#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define PWD_L 15

/**
* main - Cracks program password
*
* Return: Always 0.
*/
int main(void)
{
	const char typeset[95];
	int a, i, x;
	char password[PWD_L + 1];


	srand(time(NULL));
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
