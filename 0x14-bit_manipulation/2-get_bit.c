#include "main.h"

/**
* get_bit - function to return value of a bit to a given index
* @n: number to be searched for
* @index: index of the bit
*
* Return: value of the bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

if (index > 63)
	return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}

