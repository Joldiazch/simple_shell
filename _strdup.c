#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - creates an array of chars.
 * @str: pointer to string
 * Return: char
 */
char *_strdup(char *str)
{
	int i = 0, k;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i))
	{
		i++;
	}
	i++;
	p = malloc(i);
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		*(p + k) = *(str + k);
	}
	return (p);
}
