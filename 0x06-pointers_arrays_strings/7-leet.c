/**
 * *leet - encodes a string into 1337
 * @p: char pointer
 * Description: Letters a and A should be replaced by 4
 *		Letters e and E should be replaced by 3
 *		Letters o and O should be replaced by 0
 *		Letters t and T should be replaced by 7
 *		Letters l and L should be replaced by 1
 * 		You can only use one if and two loops
 *		You are not allowed to use switch and any ternary operation
 * Return: a pointer to the resulting string
 */
char *leet(char *p)
{
	int i, j;
	int let[] = {'o', 'O', 'l', 'L', 'e', 'E', 'a', 'A', 't', 'T'};
	int num[] = {0, 1, 3, 4, 7};
	
	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 9; j += 2)
		{
			if (p[i] == let[j] || p[i] == let[j + 1])
			{
				p[i] = num[j / 2];
				break;
			}
		}
	}
	return (p);
}
