#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	int alp, num, rom;

	for (alp = '0'; alp <= '9'; alp++)
	{
		for (num = '0'; num <= '9'; num++)
		{
			for (rom = '0'; rom <= '9'; rom++)
			{
				if (!((rom == num) || (alp == num) || (num > rom) || (alp > num)))
				{
					putchar(alp);
					putchar(num);
					putchar(rom);
					if (!((alp == '7') && (num == '8') && (rom == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
