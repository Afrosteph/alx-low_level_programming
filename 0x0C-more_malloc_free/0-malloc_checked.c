#include "main.h"
#include <stdlib.h>

/**
 *  malloc_checked - allocates memory using malloc
 *
 *  @b: amount of memory in bytes
 *
 * Return: pointer to the allocated memory, or NULL pointer
 * if the function fails
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NUUL)
		exit(98);

	return (p);
}


