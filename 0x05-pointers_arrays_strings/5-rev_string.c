#include "main.h"
#include <string.h>

/**
* rev_string - reverses a string
* @s: pointer that prints string in reverse
* Return: void
*/
void rev_string(char *s)
{
	int length, i;
	char tmp;

	length = strlen(s);

	for (i = 0; i < length / 2; ++i)
	{
		tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;

	}
}
