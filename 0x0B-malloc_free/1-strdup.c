#include "main.h"

/**
 * _strdup - duplicates string to new memory space
 * @str: string to be duplicated
 * Return: Pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *cpy;
	char *temp;
	int len;

	if (str == NULL)
		return (NULL);
	temp = str;

	while (*str)
	{
		str++;
		len++;
	}

	str = temp;
	cpy = malloc(sizeof(char) * len);
	temp = cpy;

	if (cpy != NULL)
	{
		while (*str)
		{
			*cpy = *str;
			cpy++;
			str++;
		}
		*cpy = '\0';
		return (temp);
	}
	else
		return (NULL);
}
