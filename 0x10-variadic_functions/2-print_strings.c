#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function to prints strings followed by a new line.
* @separator: string to be printed between strings.
* @n: number of strings passed to the function.
* @...: variable number of strings
*
* Return: nothing if separator is NULL and (nil) if string is  NULL
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	index = 0;
	while (index < n)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
		index++;
	}
	printf("\n");
	va_end(strings);
}
