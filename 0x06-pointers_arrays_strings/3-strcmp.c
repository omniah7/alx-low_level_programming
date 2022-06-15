/**
 * *_strcmp - compares two strings
 * @s1: the first char pointer
 * @s2: the second char pointer
 * Return: 0 if they're equal, any other integer otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum;
	
	sum = 0;
	for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		sum = s1[i] - s2[i];
	}
	return (sum);
}
