#include "holberton.h"

/**
* _strcmp - copies the first n characters of the *src to dest
* @s1: destino
* @s2: entrada
* Return: void.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
