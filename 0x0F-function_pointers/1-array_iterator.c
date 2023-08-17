#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - execute function given on each element of an array
* @array: array
* @size: the size of the array
* @action: pointer to the function needed to be used
* Return: void(success)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

