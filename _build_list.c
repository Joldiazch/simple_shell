#include "holberton.h"

void build_list(char **paths, list_t **head)
{
	int i = 0/* , k */;
	while (paths[i])
	{
		add_node(head, paths[i]);
		i++;
	}
/* 	i = 0, k= 0;
	while(paths[i])
	{
		i++;
	}
	while(k < i)
	{
		free(paths[k]);
		k++;
	}
 */	
	/* free(paths[0]); */
 	free(paths);
}
