#include "main.h"

/**
 * print_alphabet - printout alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
