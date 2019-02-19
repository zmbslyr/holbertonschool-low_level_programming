#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int x, y;
	char l;

	for (x = 0; s[x] != 0; x++)
	{

	}
	y = x - 1;
	for (; s[y] >= 0; y--)
	{
       		l = s[y];
	       	_putchar(l);
	}
	_putchar('\n');
}
