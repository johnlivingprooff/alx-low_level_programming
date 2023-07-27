#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*
* @str: point to the char that should become uppercase
*
* Return: p
*/
char *string_toupper(char *str)
{
	char *p = str;

	for (; *str != 0; str++)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - ('a' - 'A');
	}

	return (p);
}
