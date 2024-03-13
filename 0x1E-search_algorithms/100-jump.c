#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for value in an array of integers(jump search)
 * @array: pointer to the first element of the array
 * @size: size is the number of elements in array
 * @value: value to search for
 * Return: index of value if present else -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t prev;

	if (!array || size == 0)
		return (-1);

	prev = 0;
	jump = sqrt(size);

	while (array[prev] < value)
	{
		printf("Value checked array [%lu] = [%d]\n", prev, array[prev]);
		prev += jump;
		if (prev > size)
			break;
	}
	prev -= jump;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + jump);
	while (array[prev] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
		if (prev == size)
			return (-1);
	}
	return (-1);
}
