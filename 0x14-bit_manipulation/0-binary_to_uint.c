#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - function that convert binary number to unsigned int
* @b: string to contain a binary number
*
* Return: converted number or 0 if there is one or more chars
* in the string b that is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec_val = 0;

if (b == NULL)
	return (0);

while (b[i] != '\0')
{
if (b[i] < '0' || b[i] > '1')
	return (0);
dec_val = 2 * dec_val + (b[i] - '0');
i++;
}
return (dec_val);
}

