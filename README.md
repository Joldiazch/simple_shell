# # 0x16. C - Simple Shell!

A simple UNIX command line interpreter that reads and executes commands from the standard input or from a file.

# Environment

Simple Shell was built and tested in the Ubuntu 14.04 LTS via Vagrant in VirtualBox and compiled with GCC version 4.8.4

## Respository Content
- _build_list - Construct the list

- _concatenar - concatenates the command from user with paths

- _getenv - get the enviroment variable

- _read_line - read a line from stdin

- _tokenizar - parsing the line into a list of arguments

- freeLoop - frees loops

- print_list - print all elements of a list staring in head

- string_nconcat - concatenate two arrays

- add_node - adds a new node at the beginning of a list

- free_list - adds a new node at the end of a list_t list

- build_list - construct the list

-  _realloc - calloc funtion

-  _strcmp - copies the first n characters of the *src to dest 

-  _strdup - creates an array of chars

-  strlen - determine the size of an array of characters

-  _in_command - read input command

-  main - main function
## How to Install


Clone the repo below

https://github.com/Joldiazch/simple_shell.git

## How to Compile

```
cc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Example Output

Example of error with  `sh`:

```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$

```

Same error with your program  `hsh`:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$

```

# SH BUGS

No known bugs.

## AUTHORS

Jose Luis Diaz, David Agudelo Theran
