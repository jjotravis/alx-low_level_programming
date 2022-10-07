#include "main.h"

/**
 * _strncat - concatenates two strings
 * using atmost n bytes from soutrce
 * @dest: second parameter and destination
 * @src: first parameter
 * @n: max number of bytes to be cat
 * Return: value in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
