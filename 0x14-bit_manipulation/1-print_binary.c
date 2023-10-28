#include "main.h"
#include <stdio.h>

/**
* print_binary - print binary equal of a decimal number
* @n: binary number that is to be printed
*
* Return: void(Nothing)
*/

void print_binary(unsigned long int n)
{
	int i, bit_num = sizeof(unsigned long int) * 8;

	for (i = bit_num - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
			printf("1");
		else
			printf("0");
	}
}
