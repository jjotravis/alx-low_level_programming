#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to memory for string
 */

char *str_concat(char *s1, char *s2)
{
	char *st;
	int len, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = (strlen(s1) + strlen(s2) + 1);

	st = malloc(sizeof(char) * len);

	if (st == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		st[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		st[i] = s2[j];
		i++;
	}
	return (st);
}
