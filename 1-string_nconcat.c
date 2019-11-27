#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatena dos arrays.
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: numero de bytes.
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, m;
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
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		*(p + j) = *(s1 + j);
	}
	for (m = 0; m < n; m++)
	{
		*(p + m + j) = *(s2 + m);
	}
	*(p + j + m) = '\0';
	return (p);
}
