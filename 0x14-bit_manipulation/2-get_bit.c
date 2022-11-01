#include "main.h"

/**
 * get_bit - gets value of bit at given index
 * @n: number to get binary from
 * @index: position of binary to be printed
 *
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return((n >> index) & 1);
}


