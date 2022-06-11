#include <stdio.h>
/**
 * main - Fizz-Buzz test
 * Description: prints the numbers from 1 to 100, followed by a new line.
 * for multiples of 3 print Fizz
 * for the multiples of 5 print Buzz
 * For both print FizzBuzz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%i ", i);
	}
}
