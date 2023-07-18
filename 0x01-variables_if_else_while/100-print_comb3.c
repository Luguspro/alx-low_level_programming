#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	int alp, num;

	for (alp = '0'; alp <= '9'; alp++)
	{
		for (num = '0'; num <= '9'; num++)
		{
			if (!((alp == num) || (alp > num)))
			{
				putchar(alp);
				putchar(num);
				if (!((alp == '8') && (num == '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
