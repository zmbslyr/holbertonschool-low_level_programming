#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Prints part of a quote
 *
 * Return: 1 if successful
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int len;

	for (len = 0; quote[len] != '\0'; len++)
		;
	write(2, quote, len);
	write(2, "\n", 1);
	return (1);
}
