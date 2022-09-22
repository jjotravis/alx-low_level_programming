#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: an array of integers
 * @n: numbers of elements
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (n = n - 1; n > i; n--)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
	}
}
