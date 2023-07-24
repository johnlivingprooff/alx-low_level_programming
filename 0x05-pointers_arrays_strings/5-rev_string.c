#include "main.h"
#include <string.h>

/**
* rev_string - reverses a string
* @s: pointer that prints string in reverse
* Return: void
*/
void rev_string(char *s)
{
	int length;
	char tmp;

	length = strlen(s);
	/* printf("String lenght is %d\n", length); */

	while (length > 0)
	{
		tmp = s[length - 1];
		length--;
	}
}
