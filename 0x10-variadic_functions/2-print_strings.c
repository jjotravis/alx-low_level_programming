#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints sring followed by a new line
 * @separator: string between the printed strings
 * @n: number of strings passed
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list c;
	char *str;

	va_start(c, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(c, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(c);
}
