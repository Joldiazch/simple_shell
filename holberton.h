#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
* for Holberton project
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
char **_tokenizar(char *line, char *DEL);
char *_read_line(ssize_t * c);
char *_getenv(const char *pathname, char **env);
void build_list(char **paths, list_t **head);
char *str_concat(char *s1, char *s2);
char * _concatenar(list_t **head, char * comand);
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif /* HOLBERTON_H */