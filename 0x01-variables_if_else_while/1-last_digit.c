#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *  main - prints the last digit of n
 *  return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int d = n - (int)(n / 10.0) * 10;

	if (d > 5)
		printf("Last digit of %d is %d and is greater than 5/n", n, d);
	if (d == 0)
		printf("Last digit of %d is %d and is zero/n", n, d);
	if (d < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0/n", n, d);
	return (0);
}
