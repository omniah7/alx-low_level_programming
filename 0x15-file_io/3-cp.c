#include <stdio.h>
#include "main.h"
/**
* main - copies the content of a file to another file
* @ac: argument count
* @av: argument vector
* Return: 0
*/
int main(int ac, char **av)
{
	int _write, _read, fd[2];
	char buf[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd[0] = open(av[1], O_RDONLY);
	if (fd[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd[1] = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, mode);
	if (fd[1] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	do {
		_read = read(fd[0], buf, 1024 * sizeof(char));
		if (_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
			exit(98);
		}
		_write = write(fd[1], buf, _read);
		if (_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (_read > 0);
	close_files(fd);
	return (0);
}
/**
* close_files - close the opened files
* @fd: array of files descriptors
*/
void close_files(int fd[])
{
	int _close, i;

	for (i = 0; i < 2; i++)
	{
		_close = close(fd[i]);
		if (_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd[i]);
			exit(100);
		}
	}
}
