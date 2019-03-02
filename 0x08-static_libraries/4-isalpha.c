#include "holberton.h"

/**
 * _isalpha - checks if character is in the alphabet
 * @c: string
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
