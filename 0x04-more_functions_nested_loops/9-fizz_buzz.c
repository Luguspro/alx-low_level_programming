#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * print_out: assign spesfic words for specific numbers
 * Return: 0 always
 */

int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
