#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: The number of paramters passed to function
* @...: variable number of parameters
*
* Return: 0 if n == 0 and sum otherwise.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);
	a = 0;
	while (a < n)
	{
		sum += va_arg(ap, int);
		a++;
	}
	va_end(ap);
	return (sum);
}

