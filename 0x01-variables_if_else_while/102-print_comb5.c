#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if ((a < b) || (a != b))
			{
				putchar(a / 10);
				putchar(a % 10);
				putchar(' ');
				putchar(b / 10);
				putchar(b % 10);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
