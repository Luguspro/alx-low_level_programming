#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 * return:void
 */
void print_alphabet_x10(void)
{
	int a;
	char alp;

	for (a = 1; a <= 10; a++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
