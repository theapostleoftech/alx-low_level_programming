#include <stdlib.h>
#include "main.h"
/**
 * counter - count number of words
 * @str: strin gto be counted
 *
 *  Return: returns number of words
 */
int counter(char *str)
{
	int i = count;
	int count = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
			i++;
		}
		i++;
	}
	return (count);
}

/**
 * length_of_word - find the length os all the words in a string
 * @str: word to be checked
 * @nwords: number of words
 *
 * Return: Combined length of words of the arguments
 */
int *length_of_word(char *str, int nwords)
{
	int i, word, len;
	int *sizes;

	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	i = word = 0;
	whle (word < words)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i] != ' ')
			{
				len++;
				i++;
			}
			sizes[word] = len;
			word++
		}
		i++
	}
	return (sizes);
}


/**
 * strtow - Split a string into words
 * @str: String to split
 *
 * Return: Return pointer to an array of strings, NULL if it fails
 */
char **strtow(char *str)
{
	char **nstr;
	int words, i, j, k, cur_words, *sizes;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_count(str);
	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	sizes = find_words_len(str, words);
	nstr = malloc((words + 1) * sizeof(char *));
	if (nstr == NULL)
		return (NULL);
	i = j = k = 0;
	while (i < words && str[j] != '\0')
	{
		cur_words = i;
		nstr[i] = malloc(sizes[i] + sizeof(char));
		if (nstr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(nstr[i--]);
			free(nstr);
			return (NULL);
		}
		while (str[j] != '\0' && i == cur_words)
		{
			if (str[j] != ' ')
			{
				while (str[j] != '\0' && str[j] != ' ')
				{
					nstr[i][k] = str[j]; j++; k++;
				}
				nstr[i][k] = '\0'; i++; k = 0;
			}
			j++;
		}
	}
	nstr[i] = NULL;	free(sizes);
	return (nstr);
}

