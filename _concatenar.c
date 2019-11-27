#include "holberton.h"

char * _concatenar(list_t **head, char * comand)
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
				newpath = string_nconcat((temporal)->str, comandslash, strlen(comandslash));
				if (!access(newpath, X_OK))
				{
					free(comandslash);
					return(newpath);
				}
				free(newpath);
				free(comandslash);
				temporal = (temporal)->next;
			}
		}
		newpath = strdup(comand);
	}
	return(newpath);
}
