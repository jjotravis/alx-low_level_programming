#include"main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory space
 * @b: size of memory to be allocated
 *
 * Return: pointer to address block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);

	return (block);
}
