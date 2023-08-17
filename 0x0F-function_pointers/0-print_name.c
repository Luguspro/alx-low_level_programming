#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function that prints a name
* @name: string
* @f: pointer to function
*
* Return: Nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}

