#include "main.h"
/**
* strtow - function that splits a string into words.
* @str: string to be split by spaces
* Return: pointer to pointer
*/
char **strtow(char *str)
{
	size_t i, j, l = 0, index = 0, w_len = 0;
	char **array_of_words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			l++; /* calculates no. of words */
	}
	if (l == 0)
		return (NULL);
	array_of_words = (char **)malloc(sizeof(char *) * (l + 1));
	if (array_of_words == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			w_len = 0;
			while (str[i + w_len] && str[i + w_len] != ' ')
				w_len++;
			array_of_words[index] = (char *)malloc(sizeof(char) * (w_len + 1));
			if (array_of_words[index] == NULL)
			{/* Cleanup and return in case of allocation failure*/
				for (j = 0; j < index; j++)
					free(array_of_words[j]);
				free(array_of_words);
				return (NULL);
			}
			for (j = 0; j < w_len; j++)
				array_of_words[index][j] = str[i + j];
			array_of_words[index][j] = '\0'; /* Null-terminate the word*/
			index++;
			i += w_len; /*Move i to the end of the current word*/
		}
	}
array_of_words[index] = NULL;
return (array_of_words);
}
