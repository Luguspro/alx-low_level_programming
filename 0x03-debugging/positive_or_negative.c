#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to test if the number is positive or negative
 * @i: number 0 be tested
 * Return: 0 (success)
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is %s\n", i, "negative");
	else if (i > 0)
		printf("%d is %s\n", i, "positive");
	else
		printf("%d is %s\n", i, "zero");
}
