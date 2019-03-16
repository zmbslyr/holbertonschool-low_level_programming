#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds up all given numbers
 * @n: - inputs
 *
 * Return: Sum of all numbers given
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
