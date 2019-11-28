#include "holberton.h"
/**
 * _getenv - get the enviroment variable
 * @pathname: what we want to look in the enviroment
 * @env: enviroment
 * Return: a pointer to the corresponding value string
 */
char *_getenv(char *pathname, char **env)
{
	char *token, *k, *t;
	unsigned int x;

	x = 0;

	while (env[x])
	{
		k = _strdup(env[x]);
		token = strtok(k, "=");
		if (_strcmp(token, pathname) == 0)
		{
			token = strtok(NULL, "=");
			t = _strdup(token);
			free(k);
			return (t);
		}
		free(k);
		x++;
	}
	if (pathname == NULL)
		perror("NOT FOUND");
	return (NULL);
}
