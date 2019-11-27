#include "lists.h"
/**
* *add_node - function that adds a new node at the beginning of a list.
* @head: pointer to pointer to head of lements.
* @str: pointer to string.
* Return: pointer to new header node.
* Description: singly linked list node structure
* for Holberton project
*/
list_t *add_node(list_t **head, const char *str)
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
	headTemp->next = *head;
	*head = headTemp;
	return (headTemp);
}
