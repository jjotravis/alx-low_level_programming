#include "main.h"

/**
 * _memset - fills memory with a constant
 * @s: destination pointer
 * @b: value to be filled in
 * @n: number of bytes to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char) b;
	}
	return s;
}
