#include <stdlib.h>
#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main - Prints the name of the compilation file
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
