#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints string using using recursion
 * @s: pointer to string to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}


