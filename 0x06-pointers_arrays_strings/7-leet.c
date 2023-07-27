#include "main.h"

/**
* leet - function that encodes a string into 1337
*
* @str: string to be encoded
*
* Return: encoded str
*/
char *leet(char *str)
{
	int i, x;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 10; x++)
		{
			if (let[x] == str[i])
				str[i] = num[x];
		}
	}
	return (str);
}
