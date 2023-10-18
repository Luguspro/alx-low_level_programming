#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_buffer - Func allocates 1024 bytes for a buffer
* @file: The name of the file buffer that stores chars
*
* Return: A pointer to the newly-allocated buffer
*/

char *create_buffer(char *file)
{
	char *buffer;

buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", file);
	exit(99);
}
return (buffer);
}
/**
* close_file - Function closes file descriptors
* @fd: The file descriptor to be closed
*
* Return: Nothing
*/

void close_file(int fd)
{
	int c;

c = close(fd);
if (c == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
}
/**
* main - Function to copy contents of file to another file
* @argv: An array of pointers
* @argc: The number of arguments
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int from, to, wr, re;
	char *buffer;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
re = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
	if (from == -1 || re == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	wr = write(to, buffer, re);
	if (to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	re = read(from, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
}while (r > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
