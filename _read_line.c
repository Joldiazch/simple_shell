#include "holberton.h"
/**
 * _read_line - reading a line stdin
 * @c: pointer to End-Of-File indicator
 * Return: the number of bytes written into the buffer
 */

char *_read_line(ssize_t *c, char * paths, list_t *head)
{
	char *read = NULL;
	size_t buffsize = 0;

	write(STDOUT_FILENO, "MiShellaDa $: ", 15);
	/* read = calloc(size * sizeof(char), sizeof(char)); */
	*c = getline(&read, &buffsize, stdin);
	if (c == EOF)
	{
		free(paths);
		free_list(head);
		exit(EXIT_FAILURE);
	}
	return (read);
}
