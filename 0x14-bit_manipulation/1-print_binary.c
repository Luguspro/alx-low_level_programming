#include "main.h"

/**
* print_binary - print binary equivalent of a decimal number
* @n: binary number supposed to be printed
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	int b = 63, count = 0;
	unsigned long int current;

while (b >= 0)
{
	current = n >> b;
	if (current & 1)
	{
		_putchar('1');
		count++;
	}
	else if (count)
		_putchar('0');
	b++;
}
if (!count)
	_putchar('0');
}

