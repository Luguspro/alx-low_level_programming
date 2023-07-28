#include "main.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: copy to
 * @src: copy from
 * @n: char number to copy
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while ((a < n) && (src[a] != '\0'))
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
