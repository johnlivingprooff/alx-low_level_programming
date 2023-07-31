#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @accept: The string containing accepted characters.
* @s: The input string.
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	size_t len = 0;
	char *a;

	for (; *s != '\0'; s++)
	{
		a = accept;
		for (; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				len++;
				break;
			}
		}
	}


	return (len);
}
