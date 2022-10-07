#include "main.h"

/**
 * _memcpy - fn that copies n bytes from
 * @src: memory area that bytes are copied
 * @dest: memory area to which bytes are placed
 * @n: number of bytes to be copied
 * Return: pointer to dest containing copied result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p = *src;
		p++;
		src++;
	}
	return (dest);
}
