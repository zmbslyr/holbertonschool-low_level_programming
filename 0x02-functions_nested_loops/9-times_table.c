#include "holberton.h"

/**
 * times_table - Prints times table up to 9
 *
 * Return: times table
 */
void times_table(void)
{
	int x, y, m;

	y = 0;
	while (y <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			m = x * y;
			if (x !=0)
			{
				if (m > 9)
				{
					_putchar((m / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar((m % 10) + '0');
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			x++;
		}
		y++;
	}
}
