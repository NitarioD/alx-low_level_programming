#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that searches for an integer.
 *
 * @array: array
 * @size: array size
 * @action: pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
