#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: string
 * Return: 0 always
 */

int _strlen(char *s)
{
	int string = 0;

	while (s[string])
		string++;
	return (string);
}
