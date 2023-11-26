#include "shell.h"

/**
 * read_line - reads lines*
 * @i_eof: var
 * Return: char
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
