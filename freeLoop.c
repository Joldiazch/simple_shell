#include "holberton.h"

void freeLopp(char * argv, char *buff, char ** arrgv)
{
    free(argv);
    free(buff);
    free(arrgv);
}