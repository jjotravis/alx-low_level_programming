#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Power function
 * @x: Base integer
 * @y: Power integer
 * Return: Integer of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	{
		if (y == 0)
			return (1);
		{
			return (x * _pow_recursion(x, (y - 1)));
		}
	}
	return (0);
}
