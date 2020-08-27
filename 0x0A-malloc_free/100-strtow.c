#include "holberton.h"
#include <stdlib.h>

/**
 * nbOfWords - nbOfWords
 * @str: str
 *
 * Return: nbOfWords
 */
int nbOfWords(char *str)
{
	int i = 0, l = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			l++;
		i++;
	}
	if (str[i - 1] != ' ')
		l++;
	return (l);
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
