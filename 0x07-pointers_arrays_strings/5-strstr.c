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
	int i;

	for (; *haystack; haystack++)
	{
		n = needle;
		for (i = 0; n[i]; i++)
		{
			if (haystack[i] == n[i])
				return (n);
		}
	}
	return (NULL);
}
