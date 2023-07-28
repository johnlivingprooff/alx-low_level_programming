#include "main.h"

/**
* infinite_add - Function adds two numbers
* @n1: Number one
* @n2: Number two
* @r: storage buffer
* @size_r: buffer size
* Return: char *
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int r1 = 0, r2 = 0;
	int i;

	for (i = 0; n1[i] != '\0' && n2[i] != '\0'; i++)
	(
		r1 = 10 * r1 + (n1[i] - '0');
		r2 = 10 * r2 + (n2[i] - '0');
	)
	r = r1 + r2;
}
