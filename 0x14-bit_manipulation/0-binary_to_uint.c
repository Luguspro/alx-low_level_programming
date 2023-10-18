#include "main.h"

/**
* binary_to_uint - function to convert binary number to unsigned int
* @b: string to contain a binary number
*
* Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int dec_val = 0;

if (!b)
	return (0);
while (b[a])
{
if (b[a] < '0' || b[a] > '1')
	return (0);
dec_val = 2 * dec_val + (b[a] - '0');
a++;
}
return (dec_val);
}

