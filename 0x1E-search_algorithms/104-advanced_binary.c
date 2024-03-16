#include "search_algos.h"

/**
 * advanced_binary_recursive - function that searches recursively for a
 *		value in a sorted array of integers using binary search.
 * @array: ptr to the first element of the [sub]array to search.
 * @low: starting index of the [sub]array to search.
 * @high: ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: the index where the value is located, or -1
 *	if the value is not present.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (high < low)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = low + (high - low) / 2;
	if (array[i] == value && (i == low || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, low, i, value));
	return (advanced_binary_recursive(array, i + 1, high, value));
}

/**
 * advanced_binary - function that searches for a value in a sorted
 *		array of integers using advanced binary search.
 * @array: ptr to the first element of the array to search.
 * @size: no. of elements in the array.
 * @value: the value to search for.
 *
 * Return: the first index where the value is located. or -1
 *	if the value is not present or the array is NULL.
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
