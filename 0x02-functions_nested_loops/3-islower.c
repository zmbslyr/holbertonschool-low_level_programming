#include "holberton.h"

/**
 * _islower - checks if character is lower case
 *
 * Return: 1 (Sucess)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
