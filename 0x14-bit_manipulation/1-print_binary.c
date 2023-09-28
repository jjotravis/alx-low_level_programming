#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * print_binary - prints binary representation of a number
 * @n: decimal notation
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
