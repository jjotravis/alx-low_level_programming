#include "main.h"
/**
 * _islower - check main
 *@c: An input character
 * Description: checks if letter is lowercase
 * Return: 1 if lowercase 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
