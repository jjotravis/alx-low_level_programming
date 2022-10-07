#include "main.h"

/**
 * _isalpha - checks if c is a letter uppercase or lowercase
 * @c: int value to be evaluated
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
