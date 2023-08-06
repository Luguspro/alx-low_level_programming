#include "main.h"

/**
 * actual_sqrt_recursion - recursion to find the natural square root
 * @n: number whose sqro is required
 * @i: iterator
 *
 * Return: resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number whose root is to be returned
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

