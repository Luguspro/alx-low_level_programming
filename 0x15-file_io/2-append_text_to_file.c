#include "main.h"

/**
* append_text_to_file - func to append text at the end of a file
* @filename: A pointer to the file name
* @text_content: The string to be added to the end of the file
*
* Return: - -1 (failure) or if function is NULL OR if the file
* does not exist, the user lacks write permissions, otherwise - 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (len = 0; text_content[len];)
		len++;
}
a = open(filename, O_WRONLY | O_APPEND);
b = write(a, text_content, len);
if (o == -1 || b == -1)
return (-1);
	close(o);
return (1);
}

