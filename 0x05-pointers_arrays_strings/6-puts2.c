#include "main.h"

/**
 * puts2 - function that prints characters of a string from the first one
 * @str: pointer
 * Return: void
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
