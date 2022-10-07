#include "main.h"

/**
 * _strcmp - compares two  strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, '+' if s1>s2 and '-' if s1<s2
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 && *s2)
	{
		diff = (*s1 - *s2);
		s1++, s2++;
		return (diff);
	}
	return (diff);
}
