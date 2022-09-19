#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: Parameter string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != 0; l++)
	{
	}
	while (l)
	{
		_putchar(s[--l]);
	}
	_putchar('\n');
}
