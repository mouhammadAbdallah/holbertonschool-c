#include "holberton.h"

/**
 * append_text_to_file - append_text_to_file
 * @filename: filename
 * @text_content: str
 *
 * Return: -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t openn, writee, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	openn = open(filename, O_WRONLY | O_APPEND);
	writee = write(openn, text_content, len);
	if (openn == -1 || writee == -1)
		return (-1);
	close(openn);
	return (1);
}
