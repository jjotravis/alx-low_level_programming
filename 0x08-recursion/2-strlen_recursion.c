#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Counts the length of a string
 * @s: pointer to string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
