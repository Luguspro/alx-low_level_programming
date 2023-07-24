#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: stores the address of b
 * @b: stores the address of a
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int shift;

	shift = *a;
	*a = *b;
	*b = shift;
}
