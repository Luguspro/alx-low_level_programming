#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer to memory
 * @n: number of times to cpoy
 * @b: character to copy
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
