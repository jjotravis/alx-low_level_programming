#include "main.h"

/**
 * clear_bit - sets bit in position to 0
 * @n: pointer to number
 * @index: position to be set
 *
 * Return: 1 if code worked -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
