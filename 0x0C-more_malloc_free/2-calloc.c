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
	char *alloc;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		alloc[i] = 0;
	return (alloc);
}
