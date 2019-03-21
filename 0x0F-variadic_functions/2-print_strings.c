#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @seperator: spaces between words
 * @n: Number of words to print
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;
	char *string;

	va_start(valist, n);
	for (index = 0; index < n; index++)
	{
		string = va_arg(valist, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (seperator != NULL && index < (n - 1))
		{
			printf("%s", seperator);
		}
	}
	va_end(valist);
	printf("\n");
}
