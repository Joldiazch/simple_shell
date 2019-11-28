#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - calloc funtion.
 * @ptr: pointer to string
 * @old_size: pointer to string
 * @new_size: size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *k;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	k = (char *)ptr;
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		*(p + i) = *(k + i);
	}
	free(ptr);
	return (p);
}
