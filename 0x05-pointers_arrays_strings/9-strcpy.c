#include "main.h"
/**
 * *_strcpy - copies a string into another
 * @src: the source string pointer
 * @dest: the target string pointer
 *
 * Description: a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (1)
	{
		char *p;
		
		p = dest;
		*dest = *src;
		if (*src == '\0')
			break;
		dest++;
		src++;
	}
	return (p);
}
