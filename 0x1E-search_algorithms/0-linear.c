#include "search_algos.h"

/**
 * linear_search - searches for value in an array of integers(linear search)
 * @array: pointer to the first element of the array
 * @size: size is the number of elements in array
 * @value: value to search for
 *
 * Return: First index where value is located else -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
