#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @c: integer arguement
 * Return: value of last digit
 */

int print_last_digit(int c)
{
	int n;

	if (c < 0)
	{
		n = -1 * (c % 10);
	}
	else
	{
		n = c % 10;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
