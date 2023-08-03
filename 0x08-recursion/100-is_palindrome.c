#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s: string being measured
* Return: int n
*/
int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = _strlen_recursion(++s);
		n++;
		return (n);
	}
	return (0);
}

int palindrome(char *s, int start, int end);
/**
* is_palindrome -  function that tells if
* a string is a palindrome or not.
* @s: string to be tested
* Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome(s, 0, len - 1));
}

/**
* palindrome - Function that tells if a string is a palindrome or not.
* @s: String to be tested.
* @start: Index of the first character to check.
* @end: Index of the last character to check.
* Return: 1 if the string is a palindrome, 0 if not.
*/
int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (palindrome(s, start + 1, end - 1));
}
