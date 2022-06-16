/**
 * *leet - encodes a string into 1337
 * @p: char pointer
 * Description: Letters a and A should be replaced by 4
 *				Letters e and E should be replaced by 3
 *				Letters o and O should be replaced by 0
 *				Letters t and T should be replaced by 7
 *				Letters l and L should be replaced by 1
 * 				You can only use one if and two loops
 *				You are not allowed to use switch and any ternary operation
 * Return: a pointer to the resulting string
 */
char *leet(char *p)
{
	int i, j;
	char low[] = {'o', 'l', ' ', 'e', 'a', ' ', ' ', 't'};
	char upp[] = {'O', 'L', ' ', 'E', 'A', ' ', ' ', 'T'};
	
	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (p[i] == low[j] || p[i] == upp[j])
			{
				p[i] = j;
				break;
			}

		}

	}
	return (p);
}
