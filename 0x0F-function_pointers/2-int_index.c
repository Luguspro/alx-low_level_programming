#include "function_pointers.h"
/**
* int_index - function that searches for an integer
* @array: array
* @size: number of elements in the array
* @cmp: pointer to the function to be used to compare values
*
* Return: -1 if no match to func or size <= 0, esle 1st int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}

