#include "main.h"

/**
 * leet - changes characters to modified spellings
 * @s: srting of varibale pointer
 * Return: modified s
 */

char *leet(char *s)
{
	char *p = s;
	char ltr[] = {'a', 'e', 'o', 't', 'l'};
	char val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(ltr); i++)
		{
			if (*s == ltr[i] || *s == ltr[i] - 32)
			{
				*s = 48 + val[i];
			}
		}
		s++;
	}
	return (p);
}
