#include "main.h"
/**
 * is_prime_number - checks if a number is prime or not
 * @n: the number to checked
 * Return: 1 if the number is prime. 0 otherwise
 */
int is_prime_number(int n)
{
	return(prime(n, 2));
}
/**
 * prime - checks if a number is prime or not
 * @n: the number to checked
 * @g: a guess number
 * Return: 1 if the number is prime. 0 otherwise
 */
int prime(int n, int g)
{
	if (n == 2)
		return (1);
	else if (n % g == 0 || n < 2 )
		return (0);
	else
		return(prime(n, g + 1));
}
