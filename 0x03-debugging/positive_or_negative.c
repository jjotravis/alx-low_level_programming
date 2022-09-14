#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negtive - prints if integer is positive or negative
 * 
 * Return: Always 0
 */

int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}
