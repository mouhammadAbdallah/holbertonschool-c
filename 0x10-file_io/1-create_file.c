#include "holberton.h"

/**
 * create_file - create_file
 * @filename: filename
 * @text_content: str
 *
 * Return: -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t openn, writee, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		*text_content = '\0';
	for (len = 0; text_content[len]; len++)
		;
	openn = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	writee = write(openn, text_content, len);
	if (openn == -1 || writee == -1)
		return (-1);
	close(openn);

	return (1);
}
