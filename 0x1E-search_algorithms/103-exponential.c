#include "search_algos.h"

/**
 * min - get minimum value
 * @i: First value
 * @size: second value
 * Return: Smallest number
*/
int min(size_t i, size_t size)
{
	if (i < size)
		return (i);
	return (size - 1);
}

/**
 * _binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @left: Left element
 * @right: Right element
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for value in an array of integers
 * @array: pointer to the first element of the array
 * @size: size is the number of elements in array
 * @value: value to search for
 * Return: index of value if present else -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	if (array[i] == value)
		return (i);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	printf("Value found between indexes [%ld] and [%d]\n", i / 2, min(i, size));
	return (_binary_search(array, i / 2, min(i, size), value));
}
