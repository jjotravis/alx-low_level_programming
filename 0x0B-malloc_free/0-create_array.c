#include "main.h"

/**
 * create_array - creates an array of char
 * @size: number of elements in array
 * @c: char in string
 * Return: Pointer to string
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
