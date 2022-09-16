#include "main.h"

/**
 * print_number - Fn to print a number
 * @n: number to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + 48);
}
