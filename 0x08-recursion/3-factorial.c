#include "main.h"
#include <stdio.h>

/**
 * factorial - function to give factorial of a number
 * @n: Integer for function
 * Return: factorial as integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	{
		return (n * factorial(n - 1));
	}
}
