#include "main.h"

/**
 * _sqrt_recursion - find the natural sqrt of a number
 * @n: parameter to find sqrt
 * Return: Natuaral sqrt of number or
 * -1 if number does not have root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return  (n);
	return (_sqrt(1, n));
}

/**
 * _sqrt - finds sqrt of a number
 * @x: test number
 * @n: squre root of number
 * Return: sqrt of number
 */
int _sqrt(int n, int x)
{
	if (n > (x / 2))
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
