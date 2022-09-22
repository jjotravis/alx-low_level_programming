#include "main.h"

/**
 * _strcat - concatenates two strings appends
 * @dest: second string that is destination
 * @src: first string the source
 * Return: value in dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
