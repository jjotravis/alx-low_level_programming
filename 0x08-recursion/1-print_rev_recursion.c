#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to string to be printed
 * Returns: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == 0)
		return;
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
