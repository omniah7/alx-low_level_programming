
/**
 * *_strncat - copies a string
 * @dest: copied to, char pointer
 * @src: copied from, char pointer
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];
	do {
		i++;
		dest[i] = '\0';
	} while (i < n)
		
	
	return (dest);
}
