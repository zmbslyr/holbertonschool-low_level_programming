#include "holberton.h"

/**
 * _print_rev_recursion - prints a reverse string with recursion
 * @s: input string to reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
