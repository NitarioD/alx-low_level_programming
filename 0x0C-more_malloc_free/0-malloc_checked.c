#include "main.h"

/**
 * malloc_checked - function that allocates memory using
 * malloc.
 *
 * @b: amount of byte
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *all = malloc(b);

	if (all == NULL)
		exit(98);
	return (all);
}
