#include <stdio.h>

/**
 * main - Prints programs name
 * @argc: Amount of command line arguments given
 * @argv: Array holding string value of arguments given
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
