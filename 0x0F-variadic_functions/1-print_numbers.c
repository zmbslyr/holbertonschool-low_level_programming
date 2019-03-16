#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * print_numbers - Prints all numbers given to function
 * @seperator: input delimiter to go between numbers
 * @n: Numbers to be printed
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;

	if (n == 0)
		return;
	va_start(valist, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(valist, int));
		if (seperator == NULL)
		{
			seperator = "";
		}
		if (index < n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(valist);
}