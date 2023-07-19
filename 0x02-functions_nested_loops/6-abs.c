#include "main.h"
/**
 * _abs - compute absolute value of an integer
 * @n: number to be computed
 * Return: absolute valve of an integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (0);
}
