#include "holberton.h"
#include <stdlib.h>

/**
 * word_len - nb of chr in str
 * @str: The string to be searched.
 *
 * Return: nb of chr in str
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * nbOfWords - nbOfWords
 * @str: str
 *
 * Return: nbOfWords
 */
int nbOfWords(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - split string
 * @str: str to split
 *
 * Return: array of strs
 */
char **strtow(char *str)
{
	char **s;
	int l = 0, i = 0, j, k, m;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	l = nbOfWords(str);
	s = (char **)malloc(l * sizeof(char *));
	if (s == NULL)
		return (NULL);
	i = l = 0;
	while (str[i] != '\0')
	{
		j = i;
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		else
		{
			k = 0;
			while (str[j] != ' ')
			{
				j++;
				k++;
			}
			s[l] = (char *)malloc((k + 1) * sizeof(char));
			if (s[l] == NULL)
				return (NULL);
			for (m = 0; m < k; m++)
				s[l][m] = str[i + m];
			s[l][m] = '\0';
			l++;
			i = j + 1;
		}
	}
	s[l] = NULL;
	return (s);
}
