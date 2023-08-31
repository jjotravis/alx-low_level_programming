#include "main.h"

/**
 * set_bit - set a value at index to 1
 * @n: pointer to number
 * @index: position to set to 1
 *
 * Return: 1 if value was set or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n |= (1 << index);
	return (1);
}
