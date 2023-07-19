#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: starting number
 * Return: 0 always
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (n = 0; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
