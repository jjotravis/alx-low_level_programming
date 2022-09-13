#include "main.h"
/**
 * _islower - check main
 *@c: An input character
 * Description: checks if letter is lowercase
 * Return: 1 if lowercase 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			j = 1;
	}

	return (j);
}
