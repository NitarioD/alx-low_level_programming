#include "main.h"

/**
 * _realloc - function that reallocates a memory block using
 * malloc and free
 * @ptr: pointer to old memory
 * @old_size: old size in byte
 * @new_size: new size in byte
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_space;
unsigned int i;
	char *ptrCpy = (char *)ptr;

	if (new_size == 0 && ptr != NULL)
		free(ptr);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_space = malloc(new_size);
		if (new_space == NULL)
			return (NULL);
		return ((void *)new_space);
	}
	new_space = malloc(new_size);
	if (new_space == NULL)
		return (NULL);
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			new_space[i] = ptrCpy[i];
	else if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			new_space[i] = ptrCpy[i];
	free(ptrCpy);
	return ((void *)new_space);
}
