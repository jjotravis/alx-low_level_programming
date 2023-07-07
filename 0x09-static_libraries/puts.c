#include "main.h"

/**
 * _puts - funtion that prints a string followed by a new line
 * @str: parameter for fn
 * Return: Always 0
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
