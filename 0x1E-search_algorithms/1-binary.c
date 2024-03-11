#include "search_algos.h"

/**
 * binary_search - searches for value in an array of integers(binary search)
 * @array: pointer to the first element of the array
 * @size: size is the number of elements in array
 * @value: value to search for
 * Return: index of value if present else -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, high, low;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_arr(array, low, high);
		i = (low + high) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);

}

/**
 * print_arr - helper func to print array everytime array is halved
 * @array: array
 * @low: left index of original array
 * @high: right index of original array
 */
void print_arr(int *array, size_t low, size_t high)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
