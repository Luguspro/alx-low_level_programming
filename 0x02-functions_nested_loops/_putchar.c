#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write a c character to stdout
 * @c - character to be output
 * Return: 1(success)
 * -1 is returned on error, error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
