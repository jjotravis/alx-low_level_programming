#include "main.h"

/**
 * factorial - does factorial of given number
 * @n: input number
 * Return: -1 on error
 * factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else
	{
		if (n <= 1)
			return (1);
		return (n * factorial(n - 1));
	}
	return (0);
}
