#include "holberton.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: Input string to be printed
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
