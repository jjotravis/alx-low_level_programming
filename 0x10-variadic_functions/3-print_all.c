#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything apssed
 * @char: char to be printed
 * @format: format either
 * c charater
 * i integer
 * f float
 * s char*
 * Return: Nuthing
 */

void print_all(const char * const format, ...)
{
	va_list(args);
	int size = 0;
	int len = 0;
	char *temp;

	va_start(args, format);

	while (format[size] != '\0')
	{
		len++;
		size++;
	}
	size = 0;

	while (len--)
	{
		switch(format[size])
		{
			case 'c':
				printf("%c", (char)va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				temp = va_arg(args, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[size] == 'c' || format[size] == 'i' || format[size] == 'f' || format[size] == 's') && format[(size + 1)] != '\0')
			printf(", ");
		size++;
	}
	putchar('\n');
}
