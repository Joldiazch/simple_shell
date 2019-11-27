#include "holberton.h"
/**
* _getenv - get the enviroment variable
* @pathname: what we want to look in the enviroment
* @env: enviroment
* Return: a pointer to the corresponding value string
*/
char *_getenv(const char *pathname, char **env)
{
       char *token;
       unsigned int x;
       x = 0;
       while (env[x])
       {
               token = strtok(env[x], "=");
               if (strcmp(token, pathname) == 0)
               {
                       token = strtok(NULL, "=");
                       return (token);
               }
               x++;
       }
       return (NULL);
}
