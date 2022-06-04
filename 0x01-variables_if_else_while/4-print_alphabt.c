#include <stdio.h>
/**
 * main - prints all alphabet except q-e
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 97 ; a <= 122 ; a++)
	{
		if (a != 101 && a != 113)
			putchar(a);
	}
	putchar('\n');
	return (0);
}
