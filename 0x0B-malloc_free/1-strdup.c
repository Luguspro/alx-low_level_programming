#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string and NULL for insufficient memory
 */

char *_strdup(char *str)
{
	char *xxx;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	xxx = malloc(sizeof(char) * (i + 1));
	if (xxx == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		xxx[r] = str[r];
	return (xxx);
}
