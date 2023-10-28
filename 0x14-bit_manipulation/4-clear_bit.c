#include "main.h"

/**
* clear_bit - Function to set value of a bit to 0 at a given index
* @n: pointer to the number to be change
* @index: index of bit to clear
*
* Return: 1(success) or -1(if failure)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
