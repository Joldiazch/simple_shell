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
			while ((temporal)->next)
			{
				comandslash = string_nconcat("/", comand, strlen(comand));
				newpath = string_nconcat((temporal)->str, comandslash,
							 strlen(comandslash));
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
		newpath = _strdup(comand);
	}
	return (newpath);
}
