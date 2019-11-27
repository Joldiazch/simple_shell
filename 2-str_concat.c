#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - creates an array of chars.
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, k = 0, j, m = 0;
	char *p;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (*(s1 + i))
	{
		i++;
	}
	while (*(s2 + k))
	{
		k++;
	}
	p = malloc(sizeof(*p) * (i + k + 2));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		*(p + j) = *(s1 + j);
	}
	for (j = i; *(s2 + m); j++)
	{
		*(p + j) = *(s2 + m);
		m++;
	}
	j++;
	*(p + j) = *(s2 + m);
	return (p);
}
