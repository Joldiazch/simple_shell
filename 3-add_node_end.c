#include "lists.h"
/**
* *add_node_end - function that adds a new node at the end of a list_t list..
* @head: pointer to pointer to head of lements.
* @str: pointer to string.
* Return: pointer to new node.
* Description: singly linked list node structure
* for Holberton project
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *headTemp;
	unsigned int len = 0;

	headTemp = malloc(sizeof(list_t));
	if (headTemp == NULL)
	{
		return (NULL);
	}
	headTemp->str = strdup(str);
	while (str[len])
	{
		len++;
	}
	headTemp->len = len;
	headTemp->next = NULL;
	if (*head == NULL)
	{
		*head = headTemp;
	}
	else
	{
		list_t *headTemp2;

		headTemp2 = *head;
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		(*head)->next = headTemp;
		*head = headTemp2;
	}
	return (headTemp);
}
