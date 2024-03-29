#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - sum of arguements
 * @n: integers to add
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
