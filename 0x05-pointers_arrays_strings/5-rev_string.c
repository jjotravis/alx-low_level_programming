#include "main.h"

/**
 * rev_string - fn that reverses a string
 * @s: string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int f, r_s;
	char ch;

	for (f = '\0'; s[f] != 0; f++)
	{
	}
	r_s = 0;
	for (f = f - 1; r_s < f; r_s++)
	{
		ch = s[f];
		s[f] = s[r_s];
		s[r_s] = ch;
		f--;
	}
}
