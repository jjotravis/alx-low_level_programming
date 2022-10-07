#include "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: string to be scanned
 * @needle: string to be found
 * Return: pointer to begin of located string or NULL
 */
char *_strstr(char *haystack, char *needle)
{

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*needle == *haystack)
		{
			do {
				if ((*needle + 1) != '\0')
					return (haystack);
				needle++;
			} while (*haystack == *needle);
		}
		haystack++;
	}
	return ('\0');
}
