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
	int _write, _read, files[2];
	char buf[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	files[0] = open(av[1], O_RDONLY);
	check_read(files[0], av[1]);

	files[1] = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, mode);
	check_write(files[1], av[2]);
	do {
		_read = read(files[0], buf, 1024 * sizeof(char));
		check_read(_read, av[1]);

		_write = write(files[1], buf, _read);
		check_write(_write, av[2]);
	} while (_read > 0);

	close_files(files);
	return (0);
}
/**
* check_write - checks if there is an error and exits with status 99
* @_write: the write return value
* @filename: the filename
*/
void check_write(int _write, char *filename)
{
	if (_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
* check_read - checks if there is an error and exits with status 98
* @_read: the read return value
* @filename: the filename
*/
void check_read(int _read, char *filename)
{
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", filename);
		exit(98);
	}
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
