#include "main.h"

/**
* _strstr - function that locates a substring.
* @haystack: the string, where substring is located
* @needle: the substring
* Return: a pointer to the beginning of the located substring,
*	or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *n;

	for (; *haystack; haystack++)
	{
		n = needle;
		for (; *n && *n == *haystack; n++, haystack++)
			;
		if (!*n)
			return (haystack - (n - needle));

		haystack -= (n - needle);
	}
	return (NULL);
}
