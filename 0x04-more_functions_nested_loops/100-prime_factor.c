#include <stdio.h>
#include "main.h"

/**
 * main - print largest prime factor
 * Return: 0 always success
 */

int main(void)
{
	long int n, prime;

	n = 612852475143;
	for (prime = 2; prime <= n; prime++)
	{
		if (n % prime == 0)
		{
			n = n / prime;
			prime--;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
