/**
 * *_strncat - concatenates two strings
 * @dest: first char pointer
 * @src: second char pointer
 * @n: number of bytes from src
 * Description: The _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src, and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;
	int i;
	
	p = dest;
	while(*dest != '\0')
		dest++;
	for (i = 0; i < n; dest++, src++)
		*dest = *src;
	return (p);
}
