#include "main.h"

/**
 * _strpbrk - locates first occurence in string of bytes in accept
 * @s: string to be scanned
 * @accept: accepted bytes
 * Return: pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	/*char *tmp = s;*/
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
