#include "holberton.h"

/**
* _strlen - determina el tamaño de una cadeta de caracteres..
* @s: pointer of string
* Return: integer con el tamaño de la cadena cuyo pointer is *s.
*
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		s++;
		i++;
	}

	return (i);
}
