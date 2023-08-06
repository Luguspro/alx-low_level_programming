#include "main.h"

/**
 * check_pal - check the character for palindrome recursively
 * @s: string to check
 *@i: iterator
 *
 * Return: 1 if palindrone, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + (len - 1)))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - return the length of the string
 * @s: string whose length is to be calculated
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - function that returns integer
 * @s: string to be tested
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
