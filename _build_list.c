#include "holberton.h"
/**
 * build_list - construct the list
 * @paths: double pointer to enviroment
 * @head: double pointer to list
 * Return: nothing
 */
void build_list(char **paths, list_t **head)
{
	int i = 0;

	while (paths[i])
	{
		add_node(head, paths[i]);
		i++;
	}
}
