#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer to pointer *s
 * @to: char pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
