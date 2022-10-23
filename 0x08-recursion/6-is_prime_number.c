#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to be checked
 *
 * Return: 1 if number is prime
 * 0 otherwise
 */

int is_prime_number(int n)
{
	int p = n - 1;

	if (n <= 1)
		return (0);
	return(is_prime(n, p));
}

/**
 * is_prime - helps in finding prime number
 * @n: given integer
 * @p: number to check divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int p)
{
	if (p <= 1)
		return (1);
	else if (n % p == 0)
		return (0);
	return (is_prime(n, p - 1));
}
