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
	char *buffer;
	size_t readTotal = 0, writeTotal;
	ssize_t readN, writeN;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	do {
		readN = read(fd, buffer, letters - readTotal);
		if (readN < 0)
			return (0);
		if (readN == 0)
			continue;
		readTotal += readN;
		writeTotal = 0;
		do {
			writeN = write(
				STDOUT_FILENO,
				buffer + writeTotal,
				readN - writeTotal);
			if (writeN <= 0)
				return (0);
			writeTotal += writeN;
		} while (writeTotal < (size_t)readN);
	} while (readTotal < letters && readN > 0);
	close(fd);
	free(buffer);
	return (readTotal);
}
