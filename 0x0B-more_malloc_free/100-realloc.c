#include "holberton.h"

/**
 * _realloc - reallocate
 * @ptr: buffer
 * @old_size: nb
 * @new_size: nb
 *
 * Return: new buffer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int l, i;
	char *buffer, *tmp;

	if (ptr == NULL)
	{
		buffer = malloc(new_size);
		if (buffer == NULL)
			return (NULL);
		return (buffer);
	}
	if (!new_size)
	{
		free(ptr);
		return (ptr);
	}
	else
	{
		tmp = ptr;
		l = (new_size < old_size) ? new_size : old_size;
		buffer = malloc(new_size);
		for (i = 0; i < l; i++)
			buffer[i] = tmp[i];
		free(ptr);
		return (buffer);
	}
}
