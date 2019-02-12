#include "holberton.h"

/**
 * _islower - checks if character is lower case
 *
 * Return: 1 (Sucess)
 */
int _islower(int c)
{

	if (c > 96 && c < 123)
	{
		return (1);
		c = c + '0';
	}
	return (0);
}
