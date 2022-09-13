#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @c: integer arguement
 * Return: value of last digit
 */

int print_last_digit(int c)
{
	if (c > 0)
	{
		_putchar(c % 10 + '0');
		return (c % 10);
	}
	else
	{
		c = c * -1;
		_putchar(c % 10 + '0');
		return (c % 10);
	}
}
