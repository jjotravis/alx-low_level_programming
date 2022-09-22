#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: parameter
 * Return: characters
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (p);
}
