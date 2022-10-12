#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes of space allocated for ptr
 * @new_size: new size in bytes to be allocated
 * Return: new_size = old_size return ptr
 * new_size = 0 return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *cpy;
	char *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	cpy = ptr;

	mem = malloc(sizeof(cpy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = mem;
	for (i = 0; i < old_size && i  < new_size; i++)
		filler[i] = *cpy;
	free(ptr);
	return (mem);
}
