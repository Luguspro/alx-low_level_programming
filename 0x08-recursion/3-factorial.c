#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: given number
 * Return: 1 for n = 0, -1 for error and value for valid
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
