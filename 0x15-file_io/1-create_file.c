#include "main.h"
#include <string.h>
/**
* creat_file - creates a file
* @filename: the name of the file to create
* @text_content: a NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
* (file can not be created, file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		_write = write(fd, text_content, strlen(text_content));
		if (_write == -1)
				return (-1);
	}
	close(fd);
	return (1);
}
