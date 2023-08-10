#include "main.h"

/**
* _strlen - Counts length of string
* @s: counter
* Return: value of s
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
		s++;

	return (count);
}

/**
* string_nconcat - function that concatenates two strings
* @s1: string will be concatenated, into new space
* @s2: first n bytes of this string will be cat to new space
* @n: number of first n bytes
* Return: pointer to new allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, s1_len, s2_len;
	char *new_str;

	s1_len = _strlen(s1); /*counts no. of strings in s1*/
	s2_len = _strlen(s2); /*counts no. of strings in s2*/

	new_str = malloc(s1_len + n + 1);
	if (new_str == NULL)
		return (NULL); /* if malloc fails */
	for (i = 0; s1[i] != 0; i++)
	{
		new_str[i] = s1[i]; /*fills new string with char in s1*/
	}
	if (n >= s2_len)
	{
		for (j = 0; s2[j] != 0; j++, i++)
			new_str[i] = s2[j]; /*fills new string with char in s2*/
	}
	else
	{
		for (j = 0; j <= n; j++, i++)
			new_str[i] = s2[j]; /*fills chars up to n bytes*/
	}
	new_str[i] = '\0'; /*add null terminator*/
	return (new_str);
}
