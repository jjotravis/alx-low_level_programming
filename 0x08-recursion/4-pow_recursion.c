#include "main.h"

/**
 * _pow_recursion - calculates x to the power of y
 * @x: base number
 * @y: exponent
 * Return: -1 if y < 0
 * Value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}
