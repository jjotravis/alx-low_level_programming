#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates space in memory for
 * copy of string
 * @str: string to be copied
 *
 * Return: Null in case of error,
 * pointer to allocated space
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
	cpy = malloc(sizeof(char) * (len +1));
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
