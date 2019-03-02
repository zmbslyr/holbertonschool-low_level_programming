#include "holberton.h"

/**
 * _isdigit - Determines if a character is a digit
 * @c: Character input
 *
 * Return: 1 if character is a digit, 0 if anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
