#include "main.h"

/**
* flip_bits - function to count the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 63, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
	
while (i >= 0)
{
	current = exclusive >> i;
	if (current & 1)
		count++;
	i--;
}
return (count);
}

