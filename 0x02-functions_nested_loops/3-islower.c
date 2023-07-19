#include "main.h"
/**
 * _islower - chcks for lowercase charcter
 * @c: character to be checkd
 * Return: 1 for lowercase else returns 0
 */
int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	return (0);
}
