#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - operation that adds two integers
 * @a: 1st integer
 * @b: 2nd integers
 *
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operation that subtracts 1 integer from another
 * @a: 1st integer
 * @b: 2nd integer to be subtracted
 *
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operation that multiplies two numbes
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - operation that multiplies two numbers
 * @a: number to be divided
 * @b: the divisor
 *
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - operation that gives the mod of a number
 * @a: number to be divided
 * @b: the divisor
 *
 * Return: the remainder for the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
