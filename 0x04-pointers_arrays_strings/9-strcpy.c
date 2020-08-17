#include "holberton.h"

/**
 * _strcpy - copy str
 * @dest: str
 * @src: str
 *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
