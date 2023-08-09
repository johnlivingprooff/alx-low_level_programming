#include "main.h"
/**
* strtow - function that splits a string into words.
* @str: string to be split by spaces
* Return: pointer to pointer
*/
char **strtow(char *str)
{
	size_t i, j, l = 0, w_strt = 0, index = 0, w_len = 0;
	char **array_of_words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			l++; /* calculates no. of words */
	}
	if (l == 0)
		return (NULL);
	array_of_words = malloc(sizeof(char *) * (l + 1));
	if (array_of_words == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			w_len = 0;
			w_strt = i;
			for (; str[w_strt] && str[i] != ' '; w_len++, i++)
				;
			array_of_words[index] = malloc(sizeof(char) * w_len);
			if (array_of_words[index] == NULL)
			{
				for (j = 0; j < l; j++)
					free(array_of_words[j]);
				free(array_of_words);
				return (NULL);
			}
			for (j = 0; j < w_len; j++)
				array_of_words[index][j] = str[w_strt + j];
			array_of_words[index][j] = '\0';
			index++;
		}
	}
	array_of_words[l] =  NULL;
	return (array_of_words);
}
