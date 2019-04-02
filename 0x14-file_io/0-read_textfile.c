#include "holberton.h"

/**
 * read_textfile - Reads a textfile and writes it to stdout
 * @filename: The name of the file to be read
 * @letters: The amount of letters to read from the textfile
 *
 * Return: Number of characters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int buffer[1024];
	ssize_t count;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, letters);
	return (count);
}
