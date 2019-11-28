#include "holberton.h"
/**
 * _read_line - reading a line stdin
 * @c: pointer to End-Of-File indicator
 * @paths: pointer to free
 * @head: head of list to free.
 * Return: the number of bytes written into the buffer
 */

char *_read_line(ssize_t *c, char **paths, list_t *head)
{
	char *read = NULL;
	size_t buffsize = 0;

	if ((isatty(STDIN_FILENO) == 1))
		write(STDOUT_FILENO, "MiShellaDa $: ", 15);
	*c = getline(&read, &buffsize, stdin);
	if (*c == EOF)
	{
		free(read);
		free(paths);
		free_list(head);
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
	return (read);
}
