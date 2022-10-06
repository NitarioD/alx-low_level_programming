#include "main.h"

/**
 * _calloc - function that allocates memory for an array,
 * using malloc.
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;
	int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);
	return (alloc);
}
