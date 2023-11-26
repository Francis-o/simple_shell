#include "shell.h"

/**
 * get_sigint - gets single int 
 * @sig: var
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
