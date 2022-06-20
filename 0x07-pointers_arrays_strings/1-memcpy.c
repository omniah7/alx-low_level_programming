/**
 * *_memcpy -  copies memory area
 * @dest: the copied-to pointer
 * @src: the copied-from pointer
 * @n: number of first bytes of the memory area pointed to by src
 *
 * Description: The _memcpy() function copies n bytes from
 * memory area src to memory area dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
