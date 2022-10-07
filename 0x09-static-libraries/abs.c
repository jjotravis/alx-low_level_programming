#include "main.h"

/**
 * _abs - computes absolute value
 * Description: printd absolute value of a number
 * @c: the int used in arguement
 * Return: always 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
