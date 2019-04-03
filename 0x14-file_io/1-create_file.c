#include "holberton.h"

/**
 * create_file - creates a new file with text_content in it
 * @filename: Name for the new file
 * @text_content: The text content to put in the new file
 *
 * Return: 1 (Sucess)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, index;
	ssize_t writeN, writeTotal = 0;
	char *emp = "";

	if (filename == NULL)
		return (-1);
	if (text_content == NULL || text_content == emp)
	{
		fd = open(filename, O_CREAT | O_RDONLY, 0600);
		if (fd < 0)
			return (-1);
		close(fd);
		return (1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	for (index = 0; text_content[index] != '\0'; index++)
		;
	do {
		writeN = write(fd, text_content + writeTotal, index - writeTotal);
		writeTotal += writeN;
	} while (writeTotal < index);
	close(fd);
	return (1);
}
