#include "main.h"
#include <stdio.h>

/**
 * print_array -  function that prints n elements of an array of integers
 * @n: is the integer
 *@a: is the array input
 *Return: void
 */

void print_array(int *a, int n)
{
	int arrayIndex;

	for (arrayIndex = 0; arrayIndex < n; arrayIndex++)
	{
		printf("%d", a[arrayIndex]);
		if (arrayIndex != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
