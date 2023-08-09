#include "main.h"

/**
* strtow - function that splits a string into words.
* @str: string to be split by spaces
* Return: pointer to pointer
*/
char **strtow(char *str)
{
	size_t i, j, l = 0, w_len, w_strt = 0, index = 0;
	char **array_of_words, *new_word;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			l++; /* calculates no. of words */
	}
	array_of_words = malloc(sizeof(char *) * (l + 1));
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			w_strt = i;
			w_len = 0;
			for (; str[i + w_len] && str[i + w_len] != ' '; w_len++)
				;
			if (w_len == 0)
				return (NULL);
			new_word = malloc(sizeof(char) * (w_len + 1));
			if (new_word == NULL)
			{
				for (j = 0; j < i; j++)
					free(array_of_words[j]);
				free(array_of_words);
				free(new_word);
				return (NULL);
			}
		for (j = 0; j < w_len; j++)
			new_word[j] = str[w_strt + j];
		new_word[w_len] = '\0';
		array_of_words[index] = new_word;
		index++;
		i += w_len;
		}
	}
array_of_words[l + 1] =  NULL;
return (array_of_words);
}
