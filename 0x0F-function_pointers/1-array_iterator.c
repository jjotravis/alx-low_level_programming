#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter of array
 * @array: array parameter
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size--)
	{
		action(*array);
		array++;
	}
}
