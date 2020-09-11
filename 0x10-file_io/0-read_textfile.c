#include "holberton.h"

/**
 * read_textfile - read_textfile
 * @filename: filename
 * @letters: nb of char
 *
 * Return: nb of read char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openn, readd, writee;
	char *file;

	if (filename == NULL)
		return (0);
	file = malloc(sizeof(char) * letters);
	if (file == NULL)
		return (0);

	openn = open(filename, O_RDONLY);
	readd = read(openn, file, letters);
	writee = write(STDOUT_FILENO, file, readd);

	if (openn == -1 || readd == -1 || writee == -1 || writee != readd)
		return (free(file), 0);
	free(file);
	close(openn);

	return (writee);
}
