#include "main.h"

/**
 * rev_string -  function that reverses a string.
 * @s: string pointer
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, d;
	char c;

	for (a = 0; s[a] != '\0'; a++)
		;
	b = 0;
	d = a / 2;
	while (d--)
	{
		c = s[a - b - 1];
		s[a - b - 1] = s[b];
		s[b] = c;
		b++;
	}
}
