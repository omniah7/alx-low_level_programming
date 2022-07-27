#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: a text-file name
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print
*		  0 if file can not be opened or read,or filename is NULL
*		  0 if write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *buf;

	fd = open(filename, O_CREAT | O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buf = malloc(sizeof(size_t) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	_read = read(fd, buf, letters);
	if (_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	_write = write(STDOUT_FILENO, buf, _read);
	if (_write == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	return (_write);
}


