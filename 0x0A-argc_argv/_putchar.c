#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character
 * Return: 0 always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
