#include "main.h"

/**
 * largest_number - returns the largest of the three numbers
 * @a: first integer
 * @b: second integer
 * @c: Third integer
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}

	return (largest);
}
