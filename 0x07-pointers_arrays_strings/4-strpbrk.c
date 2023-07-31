#include "main.h"

/**
* _strpbrk -  function that searches a string for any of a set of bytes.
*
* @s: the input string
* @accept: the string used in comparison
* Return:  pointer to the byte in s that matches
*					 one of the bytes in accept,
*					 or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		accept++;

		if (*s == *accept)
			return (s);
	}
	return (NULL);
}
