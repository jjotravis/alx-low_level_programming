#include <unistd.h>

/**
 * main - checks the code 
 *
 * Return: 0 always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
