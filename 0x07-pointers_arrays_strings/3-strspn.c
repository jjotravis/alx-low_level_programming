#include "main.h"

/**
 * _strspn - returns number of bytes in initial segment
 * @s: null terminated string to be scanned
 * @accept: string contining characters to match
 * Return: Number of bytes that match
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int t;
	char *tmp = accept;

	while (*s != '\0')
	{
		t = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				t = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = tmp;
		if (t == 0)
			break;
	}
	return (count);
}

