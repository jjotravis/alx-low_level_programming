#include "main.h"

/**
 * flip_bits - flipping bits from one number to another
 * @n: 1st number to be flipped
 * @m:2nd number to be given after flip
 *
 * Return: Number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
