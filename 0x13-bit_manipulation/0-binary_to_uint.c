#include "holberton.h"

/**
 * binary_to_uint - Changes a binary string into an unsigned int
 * @b: Binary string to convert
 *
 * Return: Unsigned value of binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0, dec = 0;

	if (b == NULL)
		return (0);
	while (b[index] != 0)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		dec <<= 1;
		if (b[index] == '1')
			dec ^= 1;
		index++;
	}
	return (dec);
}
