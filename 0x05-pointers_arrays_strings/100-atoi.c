#include "main.h"

/**
 * _atoi -  function that convert a string to an integer
 *@s: pointer to convert
 *Return: 0 always
 */

int _atoi(char *s)
{
	int c = 0;
	int a = 1;
	int b = 0;
	unsigned int d = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			a *= -1;
		}
		while ((s[c] >= 48) && (s[c] <= 57))
		{
			b = 1;
			d = (d * 10) + (s[c] - '0');
			c++;
		}
		if (b == 1)
		{
			break;
		}
		c++;
	}
	d *= a;
	return (d);
}
