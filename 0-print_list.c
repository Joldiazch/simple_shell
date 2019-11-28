#include "lists.h"
/**
* print_list - print all elements of a list staring in head.
* @h: pointer for head of lements.
* Return: number of nods in list.
* Description: singly linked list node structure
* for Holberton project
*/
size_t print_list(const list_t *h)
{
	size_t numNodos = 0;

	if (h)
	{
		while (h->next)
		{
			if (h->str)
			{
				printf("[%i] %s\n", h->len, h->str);
			}
			else
			{
				printf("[0] (nil)\n");
			}
			h = h->next;
			numNodos++;
		}
		if (h->str)
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		return (numNodos + 1);
	}
	return (0);
}
