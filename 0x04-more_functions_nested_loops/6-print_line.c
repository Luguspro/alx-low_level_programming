#include "main.h"

/**
 * print_line - function to draws a line in the terminal with \n at the end
 * @n: number of times to print _
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = n; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
