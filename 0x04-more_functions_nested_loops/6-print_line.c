#include "main.h"

/**
 * print_line - function to draws a line in the terminal with \n at the end
 * @n: number of times to print _
 * Return: void
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
