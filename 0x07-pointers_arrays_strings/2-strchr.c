#include "main.h"

/**
 * _strchr - locates a specific character in string
 * @s: string parameter to be checked
 * @c: character to be located
 * Return: pointer to located character
 */
char *_strchr(char *s, char c)
{
	char *find;

	if (*s  != '\0')
	{
		do {
			if (*s == c)
			{
				find = s;
				break;
			}
		} while (*s++);
	}
	return (find);
}
