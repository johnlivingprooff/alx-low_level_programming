#include "main.h"

/**
* strtow - function that splits a string into words.
* @str: string to be split by spaces
* Return: pointer to pointer
*/
char **strtow(char *str)
{
	size_t i, j, l = 0, w_strt = 0, index = 0, c_total = 0;
	char **array_of_words, *new_word;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			l++; /* calculates no. of words */
		if (l == 0)
			return (NULL);
		printf("%ld\n", l);
		array_of_words = malloc(sizeof(char *) * (l + 1));
		for (i = 0; str[i]; i++)
		{
		if (str[i] != ' ')
			c_total++;
		/* printf("word-length: %ld\n", w_len); */
		}
		printf("total chars: %ld\n", c_total);
		new_word = malloc(sizeof(char) * (c_total));
		printf("word-start-index: %ld\n", w_strt);
		if (new_word == NULL)
		{
		for (j = 0; j < c_total; j++)
			free(array_of_words[j]);
		free(array_of_words);
		return (NULL);
		}
		for (j = 0; j < c_total; j++)
			new_word[j] = str[w_strt + j];
		printf("word-start-index: %ld\n", w_strt);
		new_word[j] = '\0';
		for (; index < l; index++)
			array_of_words[index] = new_word;
	}
array_of_words[l + 1] =  NULL;
return (array_of_words);
}
