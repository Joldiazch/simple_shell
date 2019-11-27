#include "holberton.h"
/**
 * freeLoop - frees loops
 * @argv: argument vector
 * @buff: buffer
 * @arrgv: double pointer
 * Return: nothing
 */

void freeLoop(char *argv, char *buff, char **arrgv)
{
	free(argv);
	free(buff);
	free(arrgv);
}
