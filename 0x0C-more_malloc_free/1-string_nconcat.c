#include "main.h"
#include "string.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings upto nth byte of
 * 2nd string
 * @s1: First string
 * @s2: Second string
 * @n: max number of bytes of second string
 * Return: pointer to memory allocated for nconcat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len;
	unsigned int i;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = (strlen(s1) +1) + n;
	cat = malloc(sizeof(char) * len);

	if (cat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		cat[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		cat[j] = s2[i];
		j++;
	}
	cat[j] = '\0';

	return (cat);
}



