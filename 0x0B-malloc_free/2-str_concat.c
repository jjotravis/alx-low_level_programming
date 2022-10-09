#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - allocate memory for two concatenated strings
 * @s1: first string parameter
 * @s2: second string paramete
 * Return: Null if memory is not allocated
 * pointer to memory
 */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	int len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = (strlen(s1) + strlen(s2) + 1);

	dst = malloc(len * sizeof(char));

	if (dst == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dst[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		dst[i] = s2[j];
		i++;
	}
	return (dst);
}

