#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: copy to memory area
 * @src: copy from memory area
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
