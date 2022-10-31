#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary to be converted
 *
 * Return: Converted number or 0 if char is not 0 or 1
 * or b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}


