#include "holberton.h"

#define BUFSIZE 50
/* #define DELIM " \t\r\n\a" */
char **_tokenizar(char *line, char *DEL)
{
  int bufsize = BUFSIZE, position = 0;
  char **tokens = malloc(bufsize * sizeof(char*));
  char *token;

  if (!tokens) {
    fprintf(stderr, "lsh: allocation error\n");
    exit(1);
  }

  token = strtok(line, DEL);
  while (token != NULL) {
    tokens[position] = token;
    position++;

    if (position >= bufsize) {
      bufsize += BUFSIZE;
      tokens = realloc(tokens, bufsize * sizeof(char*));
      if (!tokens) {
        fprintf(stderr, "lsh: allocation error\n");
        exit(1);
      }
    }

    token = strtok(NULL,DEL);
  }
  tokens[position] = NULL;
  return tokens;
}
