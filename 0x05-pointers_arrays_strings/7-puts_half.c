#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string pointer
 * Return: void
 */

void puts_half(char *str)
{
	int fstring, hstring;

	fstring = 0;
	while (str[fstring] != '\0')
		fstring++;
	hstring = fstring / 2;
	if ((fstring % 2) == 1)
		hstring++;
	while (hstring < fstring)
	{
		_putchar(str[hstring]);
		hstring++;
	}
	_putchar('\n');
}
