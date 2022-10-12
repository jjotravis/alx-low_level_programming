#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates memory to array that
 * contain all numbers from min to max
 * @min: least number to start array
 * @max: largest and final number of array
 * Return: NULL if min > max or malloc fails
 * pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int len;
	int i;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;
	array = malloc(sizeof(int) * (len + 1));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[i] = min++;
		}
		return (array);
	}
	else
		return (NULL);
}
