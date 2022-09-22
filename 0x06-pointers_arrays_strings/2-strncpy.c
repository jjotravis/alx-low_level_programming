#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination for the copied string
 * @src: string to be copied
 * @n: max number of bytes from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i <= n)
		{
			dest[i] = src[i];
		}
	}
	dest[i] = '\0';
	return (dest);
}
