#include "main.h"

/**
* set_bit - function to set value of a bit at a given index to 1
* @n: pointer to the number intended to be changed
* @index: index of the bit to set to 1
*
* Return: 1 for success or -1 for failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);
*n = ((1UL << index) | *n);
return (1);
}
