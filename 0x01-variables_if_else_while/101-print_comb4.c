#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if ((a != b) || (b != c) || (a != c) || ((a < (b & C)) & (b < c)))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
