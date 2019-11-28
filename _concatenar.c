#include "holberton.h"
/**
 * _concatenar - concatenates the command from user with paths
 * @head: double pointer to list
 * @comand: input command from user
 * Return: a concatenate new path
 */
char *_concatenar(list_t **head, char *comand)
{
	char *newpath, *comandslash;
	list_t *temporal;

	temporal = *head;

	if (comand != NULL)
	{
		if (*comand != '/')
		{
			while (temporal)
			{
				comandslash = string_nconcat("/", comand, _strlen(comand));
				newpath = string_nconcat((temporal)->str, comandslash,
							 _strlen(comandslash));
				if (!access(newpath, X_OK))
				{
					free(comandslash);
					return (newpath);
				}
				free(newpath);
				free(comandslash);
				temporal = (temporal)->next;
			}
		}

	}
	newpath = _strdup(comand);
	return (newpath);
}
