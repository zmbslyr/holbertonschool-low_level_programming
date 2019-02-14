#include "holberton.h"

/**
 * _isupper - Determines if a character is upper case
 * @c: character
 *
 * Return: 1 if uppercase, 0 is anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	return(0);
}
