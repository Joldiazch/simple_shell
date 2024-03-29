#include "holberton.h"
/**
 * _in_command - read input command
 * @av: argument vector
 * @env: enviroment
 * @read: read an argument
 * @head: pointer to list
 * Return: nothing
 */

int _in_command(char **av, char **env, char *read, list_t *head)
{
	unsigned int i = 0;

	if (av[0] != NULL)
	{
		if ((_strcmp(av[0], "env")) == 0)
		{
			while (env[i] != NULL)
			{
				write(STDOUT_FILENO, env[i], _strlen((env[i])));
				write(STDOUT_FILENO, "\n", 1);
				i++;
			}
			return (0);
		}
		if ((_strcmp(av[0], "exit")) == 0)
		{
			free(read);
			free(av);
			free_list(head);
			exit(0);
		}
	}
	return (0);
}
