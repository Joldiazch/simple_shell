#include "holberton.h"
/**
 * _tokenizar - parsing the line into a list of arguments
 * @line: pointer to buffer
 * @DEL: pointer to delimitator
 * Return: tokens
 */
char **_tokenizar(char *line, char *DEL)
{
	char *token;
	int BUFSIZE = 50;
	int bufsize = BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char *));

	if (!tokens)
	{
		perror("allocation error\n");
		exit(1);
	}

	token = strtok(line, DEL);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= bufsize)
		{
			bufsize += BUFSIZE;
			tokens = _realloc(tokens, bufsize, bufsize * sizeof(char *));
			if (!tokens)
			{
				perror("allocation error\n");
				exit(1);
			}
		}

		token = strtok(NULL, DEL);
	}
	tokens[position] = NULL;
	return (tokens);
}
