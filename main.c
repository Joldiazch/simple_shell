#include "holberton.h"

int main(int gc, char **argv, char **env)
{

	char **paths, *buff, *search_paths/* , *p */;
	char del[7] = " \t\r\n\a";
	pid_t child;
	int status/* , i = 0 */;
	ssize_t c = 0;
	list_t *head;
	(void) gc;
	argv = NULL;

	head = NULL;
	search_paths = _getenv("PATH", env);
	paths = _tokenizar(search_paths, ":");
	build_list(paths, &head);
	while (1)
	{
		buff = _read_line(&c);
		if (c == 1)
		{
			free(buff);
			continue;
		}
		if (c == EOF)
		{
			free(paths);
			free_list(head);
			write(STDOUT_FILENO, "exit\n", 5);
			exit(EXIT_FAILURE);
		}
		argv = _tokenizar(buff, del);
		argv[0] = _concatenar(&head, argv[0]);
		child = fork();
		if (child == -1)
		{
			perror("unborn child");
		}
		else if (child == 0)
		{
			if (argv[0] && (execve(argv[0], argv, NULL) == -1))
			{
				perror("Mishellada");
			}
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(&status);
			free(argv[0]);
			free(buff);
			free(argv);
		}
	}
	return (0);
}
