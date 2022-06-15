#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: the first char pointer
 * @src: the second char pointer
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 *  and then adds a terminating null byte
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *p;

	p = dest;
	for (; *dest != '\0'; dest++)
		;
	for (; src != '\0'; src++, dest++)
	{
		*dest = *src;
	}
	return (p);

}
