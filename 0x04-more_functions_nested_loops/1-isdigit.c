#include "main.h"

/**
 * _isdigit - checks if a character is a diigit or not
 * @c: character to be tested
 * Return: 1 if it is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
