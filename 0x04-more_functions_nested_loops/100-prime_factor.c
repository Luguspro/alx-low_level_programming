#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 always
 */

int main(void)
{
	long int a, b = 612852475143;

	for (a = 3; a < 782849; a = (a + 2))
	{
		if (((b % a) == 0) && (b != a))
		{
			b = b / a;
		}
	}
	printf("%ld\n", b);
	return (0);
}
