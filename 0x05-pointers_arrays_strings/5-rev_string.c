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

	length = strlen(s);
	/* printf("lenght of string: %d\n", length); */
	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar(10);
}
