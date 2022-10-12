#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in array
 * @size: bytes of each element in array
 * Return: NULL if nmemb or size is 0
 * pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = '\0';

	return (array);
}
